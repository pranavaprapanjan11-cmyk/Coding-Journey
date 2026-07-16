#include <stdio.h>

int main()
{
    int can, litre, ans;
   scanf("%d", &can);
    scanf("%d", &litre); ans = litre / can;
  if(litre % can != 0)
    {
        ans = ans + 1;
    }
 printf("%d", ans);

    return 0;
}