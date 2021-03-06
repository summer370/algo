#include "leetcode.h"

using namespace std;

class Solution {
private:
  static unordered_map<char, int> mp;
public:
  int romanToInt(string s) {
    if (s.empty()){
      return 0;
    }
    int res = 0, n = s.length();
    for (int i = 0; i < n - 1; ++i) {
      res += mp[s[i]] < mp[s[i + 1]] ? -mp[s[i]] : mp[s[i]];
    }
    res += mp[s[n - 1]];
    return res;
  }
};

unordered_map<char, int> Solution::mp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

int main(){
  Solution s;
  vector<string> romans = {"I", "IV", "XX", "XXL", "XL", "LXVIII"};
  for (string str : romans){
    cout << s.romanToInt(str) << endl;
  }
  return 0;
}
