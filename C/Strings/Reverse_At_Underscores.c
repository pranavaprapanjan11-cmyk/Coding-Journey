#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int start=0,end;
    for(int i=0;str[i]!='\0';i++){
       if(str[i]=='_')
       {
           end=i-1;
           for(int j=end;j>=start;j--){
               printf("%c",str[j]);
           }
           start=i+1;
           end=i;
           for(int k=start;str[k]!='\0' && str[k]!='_';k++)
           {
               printf("%c",str[k]);
               end=k;
           }
           start=end+1;
       }
    }
    // Print remaining characters after last underscore
    if(start < strlen(str)){
       for(int k=start;str[k]!='\0';k++){
           printf("%c",str[k]);
       }
    }
    printf("\n");
    return 0;
}
