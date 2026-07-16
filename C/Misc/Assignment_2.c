#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int total = n * (n + 1) / 2;
    int start = total;

    for(int i = n; i >= 1; i--) {
        int temp = start;
        for(int j = i; j <= n; j++) {
            printf("%d ", temp);
            temp -= j;
        }
        printf("\n");
        start--;
    }

    return 0;
}
