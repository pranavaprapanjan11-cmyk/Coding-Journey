#include <stdio.h>
#include<string.h>
int main(){
    char str[50];
    int flag=1;
    scanf("%s",str);
    int len= strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            flag=0;
            break;
        }
    }
    if (flag==1){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }

}
