#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int length, flag = 1;

    fgets(str, sizeof(str), stdin);

   

    length = strlen(str);

    for(int i = 0; i < length/2; i++){
        if(str[i] != str[length - i - 1]){
            flag = 0;
            break;  // optional but efficient
        }
    }

    if(flag == 1){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }

    return 0;
}
