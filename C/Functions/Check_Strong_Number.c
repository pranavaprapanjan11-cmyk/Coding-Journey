#include <stdio.h>

int main() {
    int num, temp, digit;
    int sum = 0, fact;

    scanf("%d", &num);
    temp = num;

    while (temp != 0) {
        digit = temp % 10;

        // calculate factorial of digit
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num) {
        printf("Strong Number");
    } else {
        printf("Not a Strong Number");
    }

    return 0;
}
