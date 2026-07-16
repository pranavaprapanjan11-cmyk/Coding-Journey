#include<stdio.h>
int main(){
    int leap;
    scanf("%d",&leap);
    if((leap%4==0&&leap!=100)||(leap%400==0)){
            printf("%d given year is a leap year",leap);

    }
    else{
        printf("%d is not a leap year",leap);
    }
}
