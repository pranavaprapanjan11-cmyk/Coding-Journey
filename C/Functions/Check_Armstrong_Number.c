#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, count = 0;
    int arm = 0;

    scanf("%d", &num);
    temp = num;

    
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;

   
    while (temp != 0) {
        digit = temp % 10;
        arm = arm + pow(digit, count);
        temp = temp / 10;
    }

    if (arm == num)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
