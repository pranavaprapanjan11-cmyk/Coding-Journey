#include <stdio.h>

int main() {
    int n, digit = 1;
    scanf("%d", &n);

    int temp = n;
    int square = n * n;

    
    while (temp != 0) {
        digit = digit * 10;
        temp = temp / 10;
    }

    if (square % digit == n) {
        printf("automorphic");
    } else {
        printf("not automorphic");
    }

    return 0;
}
