#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if(str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    int start = 0;

    for(int i = 0; i <= len; i++) {

        if(str[i] == ' ' || str[i] == '\0') {

            int end = i - 1;

            while(start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}
