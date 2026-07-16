#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    int arr[50];
    for(int i = 0; i < num; i++){
        scanf("%d",&arr[i]);
    }

    int i = 0, j = num - 1, temp;

    while(i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
