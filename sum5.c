#include <stdio.h>

int main(void) {

   int i,d,max, start, end, start_m, end_m, count;
   d = 0;
   start = 1, end = 1; start_m = 1; end_m = 1; count = 0;
   scanf("%d", &i);
   
   max = i;

   while(i != 0)
   {
      count++;

      d = d + i;
     /* printf("%d,%d[%d,%d]%d\n",i,d,start_m,end_m,max); */
      printf("%d,%d\n",i,d);
      if(d > max)
      {
         end_m = count;
         max = d;
         start_m = start;
      }

     
      if(d <= 0)
      {
         d = 0;
         start = count + 1;
      }

      
      scanf("%d", &i);     
   }
   printf("%d[%d,%d]\n",max,start_m,end_m);
   return 0;
}
