#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    switch(c){
        case 'E':
        case 'e':
        printf("excellent");
        break;
        case 'V':
        case 'v':
        printf("very good");
        break;
        case 'G':
        case 'g':
        printf(" good");
        break;
        case 'A':
        case 'a':
        printf("average");
        break;
        case 'F':
        case 'f':
        printf("fail");
        break;
        
    }
}