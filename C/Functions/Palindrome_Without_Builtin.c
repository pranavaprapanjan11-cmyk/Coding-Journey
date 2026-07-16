#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    int len = 0;

    while (str[len] != '\0') {
        len++;
    }

    int flag = 1;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
