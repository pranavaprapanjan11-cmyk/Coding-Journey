#include <stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>num2&&num1>num3){
        printf("%d is greatest of all ",num1);
    }
    else if (num2>num1&&num2>num3){
        printf("%d is greatest of all",num2);
    }
    else if(num3>num1&&num3>num2){
        printf("%d is greatest of all",num3);

    }
    else{
        printf("all are equal");
    }
}
