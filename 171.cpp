#include "leetcode.h"

using namespace std;

class Solution {
public:
  int titleToNumber(string s) {
    int res = 0, n = s.size(), k = 1;
    for (int i = n - 1; i >= 0; --i) {
      res += k * (s[i] - 'A' + 1);
      k *= 26;
    }
    return res;
  }
};

int main(){
  Solution s;
  cout << s.titleToNumber("A") << endl;
  cout << s.titleToNumber("B") << endl;
  cout << s.titleToNumber("C") << endl;
  cout << s.titleToNumber("Z") << endl;
  cout << s.titleToNumber("AA") << endl;
  cout << s.titleToNumber("AB") << endl;
  return 0;
}
