#include <stdio.h>

int main(void) {

   int i, d, mult;

   printf("Enter n (>1): ");
   scanf("%d", &i);

   d = 1;
   mult = i; 
   while(mult != 1)
   {  
      d++;
      while(mult % d == 0)
      {
         mult = mult/d;
         if(mult == 1)
         {
            break;
         }
         printf("%d x ", d);
      }
   }
   
   printf("%d", d);

   return 0;
}
