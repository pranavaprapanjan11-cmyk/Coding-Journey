#include <stdio.h>
#include <string.h>

int main(){
char str[100];
fgets(str,100,stdin);
int start=0;
int len= strlen(str);
for(int i=len-1;i>=start;i--){
    printf("%c",str[i]);
}
}
