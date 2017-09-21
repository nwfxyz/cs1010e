#include <stdio.h>

int main(void) {

   int i,d,max, start, end, start_m, end_m, count;
   d = 0;
   start = 1, end = 1; start_m = 1; end_m = 1; count = 0;
   scanf("%d", &i);
   
   max = i;

   while(i != 0)
   {
      count++

      d = d + i;
      printf("%d,%d\n",i,d);
     
      if(d > max)
      {
         end_m = count;
         max = d;
      }

     
      if(d < 0)
      {
         d = 0;
         start_m = count + 1;
      }

      
      scanf("%d", &i);     
   }

   printf("%d\n",max);
   return 0;
}
