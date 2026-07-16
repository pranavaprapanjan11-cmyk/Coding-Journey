#include<stdio.h>
int main(){
    int num,sum=0;
    scanf("%d",&num);
    int arr[50];
    for (int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<num;i++){
      if(arr[i]%2==0){
        sum=sum+arr[i];
      }
    }
    printf("%d",sum);
}