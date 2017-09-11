#include <stdio.h>

int main(void)
{

   int n,g,d;
   g = 0;
   d = 0;
   printf("No of Days: %d");
   scanf("%d",&n);
   
   for(int i = 1; i <= n ; i = i + 1)
   {
      g = g + i;
      d = d + g;
   }

   printf("Number of presents: %d",d);

   return 0;
}
