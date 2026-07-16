#include <stdio.h>

int main() {
    int limit;
    int a = 1, b = 1, c;

    scanf("%d", &limit);

    if (limit >= 1)
        printf("%d ", a);

    if (limit >= 1)
        printf("%d ", b);

    c = a + b;

    while (c <= limit) {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}
