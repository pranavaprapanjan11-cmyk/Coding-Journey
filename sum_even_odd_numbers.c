#include <stdio.h>

int main() {
    int n;
    int evenSum = 0, oddSum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum = evenSum + i;
        } else {
            oddSum = oddSum + i;
        }
    }

    printf("Sum of Even Numbers = %d\n", evenSum);
    printf("Sum of Odd Numbers  = %d", oddSum);

    return 0;
}
