#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    int arr[50];
    for (int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<num;i++){
      if(arr[i]==0){
       count++;
      }
    }
    printf("%d",count);
}