#include <stdio.h>
int main (){
    int num;
    scanf("%d",&num);
    int arr[100];
    for(int i=0;i<num;i++){
       scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        if(arr[i]%3==0&&arr[i]%5==0){
            printf("%d",arr[i]);
        }
    }
}
