#include <stdio.h>

int main(void) {

   int i, j, div, ans, a, b, tmp;
   
   printf("Enter two positive number (> 0) seperated by spaces: ");
   scanf("%d %d", &i, &j);

   /* Method 1 */

   div = 1, ans = 1;
   do
   {
      div++;
      if(i % div == 0 && j % div == 0)
      {
         ans = div;
      }
   }
   while(div <= j || div <= i);

   printf("The gcd of %d and %d is %d.\n", i, j, ans);
   

   div = j;
   if(i > j)
   {
      div = i;
   }

   do
   {
      
      if(i % div == 0 && j % div == 0)
      {
         ans = div;
         break;
      }
   div--;

   }
   while(div > 1);


   printf("The gcd of %d and %d is %d.\n", i, j, ans);
   
   b = i % j;
   a = j;

   while(b != 0)
   {
      tmp = b;
      b = a % b;
      a = tmp;
   }
   
   printf("The gcd of %d and %d is %d.\n", i, j, a);
   





   return 0;
}
