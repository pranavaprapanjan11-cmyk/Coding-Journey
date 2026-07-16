#include <stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    int len=0,part=0;
    while(str[len]!='\0'){
     len++;
    }
    if(len%3==0){
        part=len/3;
    }
    for(int i=0;i<part;i++){
         if(str[i]>='a'&&str[i]<='z'){
          printf("%c",str[i]-32);
         }
         else if(str[i]>='A'&&str[i]<='Z'){
            printf("%c",str[i]+32);
         }
         else{
            printf("%c",str);
         }
    }
     for(int i=2*part-1;i>=part;i--){
         if(str[i]>='a'&&str[i]<='z'){
          printf("%c",str[i]-32);
         }
         else if(str[i]>='A'&&str[i]<='Z'){
            printf("%c",str[i]+32);
         }
         else{
            printf("%c",str);
         }
    }
    for(int i=2*part;i<len;i++){
         if(str[i]>='a'&&str[i]<='z'){
          printf("%c",str[i]-32);
         }
         else if(str[i]>='A'&&str[i]<='Z'){
            printf("%c",str[i]+32);
         }
         else{
            printf("%c",str);
         }
    }
}
