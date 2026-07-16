#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
 int answers[t];
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
       char s[n + 1];
       scanf("%s", s);
       int cnt = 0;
        int maxLen = 0;
       for (int j = 0; j < n; j++) {
            if (s[j] == '#') {
                cnt++;
            } else {
                cnt = 0;
            }

            if (cnt > maxLen) {
                maxLen = cnt;
            }
        }

        answers[i] = (maxLen + 1) / 2;
    }

    for (int i = 0; i < t; i++) {
        printf("%d\n", answers[i]);
    }

    return 0;
}