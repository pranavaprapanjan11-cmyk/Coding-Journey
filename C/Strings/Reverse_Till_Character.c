#include <stdio.h>
#include <string.h>

int main(){
char str[100];
fgets(str,100,stdin);
int n;
scanf("%c",n);
int end=0;
int start;
int len= strlen(str);
for(int i=0;str[i]!='\0';i++){
   if(str[i]==n){
     start=i;
   }
   for(int i=start;i>=end;i--){
    printf("%c",str[i]);
   }
}
}