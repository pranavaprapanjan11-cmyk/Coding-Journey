#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int i = 0;

    while(str[i] != '\0') {

        if(str[i] == ' ') {
            printf(" ");
            i++;
            continue;
        }

        char word[100];
        int j = 0;

        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        // Process the word (complete logic needed)
        for (int k = 0; k < j; k++) {
            printf("%c", word[k]);
        }
    }
    return 0;
}
