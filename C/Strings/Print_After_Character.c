#include <stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    char ch;
    scanf("%c",&ch);

    for(int i=0;str[i]!='\0';i++){
     if(str[i]==ch){
        int start=i;
        for(int i=start;str[i]!='\0';i++){
            printf("%c",str[i]);
        }
     }

    }
}
