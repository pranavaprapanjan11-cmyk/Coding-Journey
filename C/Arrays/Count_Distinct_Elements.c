#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    int arr[50];
    for(int i = 0; i < num; i++){
        scanf("%d",&arr[i]);
    }

    int flag = 1;

    for(int i = 0; i < num; i++){
        for(int j = i + 1; j < num; j++){
            if(arr[i] == arr[j]){
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("distinct");
    else
        printf("not distinct");

    return 0;
}
