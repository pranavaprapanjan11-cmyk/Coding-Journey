#include <stdio.h>
int main(){
    int N,fmax,smax=-1,curr;
    scanf("%d%d",&N,&fmax);
    for(int ctr=2;ctr<=N;ctr++){
       scanf("%d",&curr);
       if(curr>fmax){
        smax=fmax;
        fmax=curr;
       }
       else if(curr>smax){
        smax=curr;
       }
    }
    printf("%d %d",fmax,smax);

}