#include <stdio.h>

char s[] = "0123456789ABCDEF";

void tohex(int v) {
    if (v == 0) {
        printf("0");
        return;
    }

    if (v / 16 != 0) {
        tohex(v / 16);
    }

    printf("%c", s[v % 16]);
}

int main(void) {
    int N;
    scanf("%d", &N);
    tohex(N);
    printf("\n");
    return 0;
}
