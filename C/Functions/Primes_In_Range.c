#include <stdio.h>

int main() {
    int start, end, i, j;

    scanf("%d", &start);

    scanf("%d", &end);

    for(i = start; i <= end; i++) {

        if(i <= 1)
            continue;

        for(j = 2; j * j <= i; j++) {
            if(i % j == 0)
                break;
        }

        if(j * j > i)
            printf("%d ", i);
    }

    return 0;
}
