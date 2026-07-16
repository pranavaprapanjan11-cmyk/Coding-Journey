#include <stdio.h>
int main(){
    int num,digit,rem=0;
    scanf("%d",&num);
   int org=num;
    while(num!=0){
        digit=num%10;
        rem=rem*10+digit;
        num=num/10;

    }
    if(rem==org){
        printf("palindrome");

    }
    else{
        printf("not palindrome");
    }
}
