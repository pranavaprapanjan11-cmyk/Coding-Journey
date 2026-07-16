#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int answers[t];
     int n;
    int arr[100];
    
      
    for(int i=0;i<t;i++){
     
      scanf("%d",&n);
      scanf("%d",&arr[i]);
    }
      for(int j=0;j<n;j++){
        if(arr[j]>arr[j+1]&&arr[j+1]>arr[j+2]){
            printf("yes");
            break;
        }
        else{
            printf("No");
        }
      }
    
}