#include <stdio.h>
int main() {
    
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            j++;
        }
    }
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}