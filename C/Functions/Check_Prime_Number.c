#include <stdio.h>
int main (){
    int num,flag=1;
    scanf("%d",&num);
    for (int i=2;i<num/2;i++){//3
        if(num%i==0)
        flag=0;

    }
    if(flag==1){
        printf("prime");
    }
    else{
        printf("not prime");
    }

}