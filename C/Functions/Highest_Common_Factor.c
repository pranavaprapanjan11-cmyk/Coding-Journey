#include <stdio.h>
int main() {

    int x,y;
    scanf("%d %d",&x,&y);

    while(y!=0){
        int t=y;
        y=x%y;
        x=t;
    }
    printf("%d %d",x,y);
    return 0;
}
