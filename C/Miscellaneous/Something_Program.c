#include <stdio.h>
int main()
{
    char number[100];
    if (scanf("%99s", number) != 1) {
        return 0;
    }

    int arr[100];
    int length = 0;

    for (int i = 0; number[i] != '\0'; i++) {
        if (number[i] == '-') {
            continue;
        }
        arr[length++] = number[i] - '0';
    }

    for (int i = 0; i < length; i++) {
        printf("%d", arr[i]);
        if (i < length - 1) {
            printf(" ");
        }
    }

    return 0;
}