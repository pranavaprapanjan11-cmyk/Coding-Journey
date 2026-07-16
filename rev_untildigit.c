#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);

    char ch;
    scanf(" %c", &ch);

    int start = -1;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            start = i;
            break;
        }
    }

    if(start != -1) {
        for(int i = start; i >= 0; i--) {
            printf("%c", str[i]);
        }

        for(int i = start + 1; str[i] != '\0'; i++) {
            printf("%c", str[i]);
        }
    }

    return 0;
}