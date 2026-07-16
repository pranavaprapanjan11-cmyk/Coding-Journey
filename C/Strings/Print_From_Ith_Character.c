#include <stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int n;
    scanf ("%d",&n);
    int start=n;
    for(int i=start;str[i]!='\0';i++){
        printf("%c",str[i]);
    }

}
