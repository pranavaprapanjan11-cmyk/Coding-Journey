#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s", str);

    for(int i = 1; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            if(str[i-1] >= 'a' && str[i-1] <= 'z')
                str[i-1] = str[i-1] - 32;   // lowercase to uppercase
            else if(str[i-1] >= 'A' && str[i-1] <= 'Z')
                str[i-1] = str[i-1] + 32;   // uppercase to lowercase
        }
    }

    printf("%s", str);

    return 0;
}
