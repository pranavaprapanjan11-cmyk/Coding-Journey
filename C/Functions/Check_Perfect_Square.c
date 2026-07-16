#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int p=sqrt(n);
    if(p*p==n){
        printf("perfect square");

    }else{
        printf("not a perfect square");
    }
}
