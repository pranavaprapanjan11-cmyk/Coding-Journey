#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&target);

    int nearest = a[0];

    for(int i=1;i<n;i++) {
        if(abs(a[i]-target) < abs(nearest-target))
            nearest = a[i];
    }

    printf("Nearest number = %d", nearest);

    return 0;
}