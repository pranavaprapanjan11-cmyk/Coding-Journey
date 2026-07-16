#include <stdio.h>

int main(){
    int num, digit, start, end;

    scanf("%d",&start);
    scanf("%d",&end);

    for(num = start; num <= end; num++){

        int org = num;   // move inside loop
        int rem = 0;

        while(org != 0){
            digit = org % 10;
            rem = rem * 10 + digit;   // correct formula
            org = org / 10;
        }

        if(rem == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
