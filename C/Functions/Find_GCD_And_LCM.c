#include <stdio.h>

int main() {
    int a, b, temp, gcd, lcm;
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (x * y) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d", lcm);

    return 0;
}
