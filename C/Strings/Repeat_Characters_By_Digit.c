#include <stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    int repeat=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0'&&str[i]<='9'){
            repeat=str[i]-'0';
        }
        else{
            for(int j=0;j<repeat;j++){
                printf("%c",str[i]);
            }
        }
    }
}
