#include <stdio.h>

int main() {
    char str[100];
    int i, limit;

    scanf("%s", str);

    scanf("%d", &limit);

    for(i = 0; i < limit && str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    printf("%s", str);

    return 0;
}
