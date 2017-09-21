#include <stdio.h>

int main(void) {

   int n,i;
   double j, min, max, t, sum, norm;
  

   scanf("%d",&n);
   while(n > 0)
   {
      sum = 0;
      max = -9999;
      min = 9999;
     
      for(i = 0; i < n; i++)
      {
         scanf("%lf",&j);
         sum = sum + j;
         
         if(max < j)
         {
            max = j;
         }
         
         if(min > j)
         {
            min = j;
         }
      }
      
      norm = sum/(max - min)/n - min/(max -min);
      printf("Normalized mean: %lf", norm);
      scanf("%d",&n);

   }





   return 0;
}
