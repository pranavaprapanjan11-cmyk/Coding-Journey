#include <stdio.h>

int main() {
    char str[100];
    int i = 0, sum = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] >= '0' && str[i] <= '9') {
            sum = sum + (str[i] - '0');
        }
        i++;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
