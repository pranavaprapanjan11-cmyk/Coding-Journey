
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int a[n][n];
   for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int f=1;
    int cnt=0;
    while(cnt<4)
    {
        f=0;
        for(int i = 0; i < n; i++)
        {
         for(int j = 0; j < n; j++)
            {
                if(arr[i][j]!=a[i][j])
                f=1;
            }
        }
        if(f==0)
        break;
        
        cnt++;
        for(int i = 0; i < n; i++)
         {
         for(int j = i+1; j < n; j++)
            {
                int t=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=t;
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n/2; j++)
            {
                 int t=arr[i][j];
                arr[i][j]=arr[i][n-j-1];
                arr[i][n-1-j]=t;
             }
        }
     
    }
    printf("\n");
  
    printf("\n%d",cnt);
    
    
    
    return 0;
}