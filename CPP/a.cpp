#include <iostream>
#include <string>

void solve() {
    std::string s;
    if (std::cin >> s) {
        int flag = 0;
        for (char ch : s) {
            if (ch >= 'a' && ch <= 'z') {
                flag |= (1 << (ch - 'a'));
            }
        }
        if (flag == (1 << 26) - 1) {
            std::cout << "all lower case present\n";
        } else {
            std::cout << "Not present\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int tc = 1;
    while (tc-- > 0) {
        solve();
    }
    return 0;
}
