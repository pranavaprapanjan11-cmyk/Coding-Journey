#include <stdio.h>
int main(){
    int repeat;
    char str[100];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        repeat=0;
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                repeat=1;
                break;
            }
        }
        if(repeat)
        break;
        printf("%c",str[i]);
    }
}
