#include <stdio.h>
int main(){
     int num,rev=0,digit,temp;
    scanf("%d",&num);
     temp=num;
    while(num!=0){
        digit=num%10;
       rev=rev*10+digit;
        num=num/10;
    }
    if(rev==temp){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
  
}