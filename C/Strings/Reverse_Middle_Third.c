#include <stdio.h>

int main() {
    char str[100];
    int len = 0, start, end;

    scanf("%s", str);

    while(str[len] != '\0')
        len++;

    if(len % 3 == 0) {
        int part = len / 3;

        for(int i = 0; i < part; i++)
            printf("%c", str[i]);

        start = part;
        end = 2 * part - 1;

        for(int i = end; i >= start; i--)
            printf("%c", str[i]);

        for(int i = 2 * part; i < len; i++)
            printf("%c", str[i]);
    }

    return 0;
}
