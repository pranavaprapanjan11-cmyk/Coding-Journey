#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[50];
    for (int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}