#include <stdio.h>
void printvals(int val)
{
    if(val==0)return;
    printf("%d ",val);
    printvals(val-1);
}
int main(){
    int x;
    scanf("%d",&x);
    printvals(x);
    return 0;
}
