#include <stdio.h>



int main(void)
{
   int g,i;
   double d,x,n;
   i = 1;
   d = 0;
   g = -1;
   x = 100.0;
   printf("Enter n: ");
   scanf("%lf",&n);
   
   printf("n: %lf\n",n);
   
      do
      {
         g = g*-1;
         x = 4.0/(2*i - 1);
         d = d + x*g ;
         i = i + 1;
         printf("x: %lf\n",x);   
         printf("d: %lf\n",d);        
      }
      while(n < x);

   printf("The answer is %lf", d);

   return 0;

}
