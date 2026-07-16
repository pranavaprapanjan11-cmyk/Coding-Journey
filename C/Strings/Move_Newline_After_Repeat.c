#include <stdio.h>
int main(){
    char str[100];
    scanf("%c",str);
    int repeat =0;
    for(int i=0;str[i]!=0;i++){
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                repeat=1;
                break;
        }
    }
    if(repeat)
    break;
    printf("%c",str);
}
}
