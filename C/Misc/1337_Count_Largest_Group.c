#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int k;
    scanf("%d",&k);

    int cnt[n];
    int idx[n];

    for(int i=0;i<n;i++)
    {
        idx[i] = i;
        cnt[i] = 0;

        for(int j=0;j<n;j++)
        {
            if(arr[i][j] == 1)
                cnt[i]++;
        }
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(cnt[i] > cnt[j])
            {
                int t = cnt[i];
                cnt[i] = cnt[j];
                cnt[j] = t;

                t = idx[i];
                idx[i] = idx[j];
                idx[j] = t;
            }
        }
    }

    for(int i=0;i<k;i++)
    {
        printf("%d ", idx[i]);
    }

    return 0;
}
