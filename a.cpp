#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;

    int flag = 0;
    for (char ch : s) {
        flag |= (1 << (ch - 'a'));
    }
 if (flag == (1 << 26) - 1) {
        cout << "all lower case present";
 } else {
   cout << "Not present";
    }
}

int main() {
    ios::sync_with_stdio(false);
      cin.tie(0);

      int tc = 1;
    while (tc-- > 0) {
        solve();
    }
    return 0;
}