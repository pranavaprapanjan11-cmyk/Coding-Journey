#include <stdio.h>

int main() {
    int row, cols;
    scanf("%d%d", &row, &cols);

    int arr[row][cols];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int count1 = 0;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] == 1) {
                count1++;
            }
        }
    }

    printf("%d", count1);

    return 0;
}
