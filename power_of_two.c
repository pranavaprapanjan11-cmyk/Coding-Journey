#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int power = 1;  
    while (power <= n) {
        printf("%d ", power);
        power = power * 2;
    }

    return 0;
}
