#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    int primary = 0, secondary = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);

            if(i == j)
                primary += matrix[i][j];

            if(i + j == n - 1)
                secondary += matrix[i][j];
        }
    }

    printf("%d", abs(primary - secondary));

    return 0;
}
