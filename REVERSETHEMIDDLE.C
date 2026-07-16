#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    int len=0,part=0;
    while (str[len]!='\0'){
        len++;
    }
    if(len%3==0){
        part=len/3;

    }
    for(int i=0;i<part;i++){
        printf("%c",str[i]);
    }
    for(int i=2*part-1;i>=part;i--){
        printf("%c",str[i]);
    }
    for(int i=part*2;i<len;i++){
        printf("%c",str[i]);
    }
}