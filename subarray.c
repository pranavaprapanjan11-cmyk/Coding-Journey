#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[50];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int start,end;
    int count=1;
    for(int start=0;start<n;start++){
        for(end=start;end<n;end++){
            printf("\nsubarray%d\n",count++);
        }
    }
    for(int i=0 )
}