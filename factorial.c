#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int fact=num;
    for (int i=1;i<num;i++){
        fact=fact*i;

    }
    printf("%d",fact);
}