#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);

    if(str[len-1]=='\n'){
        str[len-1]=='\0';
        len--;
    }
    int rev=strrev(str);
    printf("[^\n]",rev);
}