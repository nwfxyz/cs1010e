#include <stdio.h>

int main(void) {

   int i,d,max,first,last,count, first2;
   d = 0;
   first = 1;
   last = 1;
   count = 1;
   first2 = 1;
   max = 1;
   while( i != 0)
   {
      scanf("%d", &i);
      if(i != 0)
      {
      d = d + i;
      
      printf("%d,%d\n",i,d);
   
     if(d <= 0)
      {
         d = 0;
         first2 = count + 1;
/*         printf("Here"); */
      }


      if(d > max)
      {
         first = first2;
         max = d;
         last = count;
      /*   printf("Max\n"); */
      }
      count++;
      }
   }

   printf("%d[%d,%d]\n",max,first,last);
   return 0;
}
