#include <stdio.h>

int main()
{
    int size, m, n;
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &m, &n);

    if(size != m * n)
    {
        printf("[]");
        return 0;
    }

    int mat[m][n];
    int k = 0;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            mat[i][j] = arr[k];
            k++;
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);}
        }
        printf("\n");
    }

    return 0;
