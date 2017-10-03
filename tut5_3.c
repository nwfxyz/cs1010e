#include <stdio.h>
#include <stdbool.h> 
int main(void) {

   int i, j, count, input, v;
   bool check;
   count = 0;
   scanf("%d", &input);
   
   for(i = 2; i <= input-1; i++)
   {
      for(j = i + 1; j <= input; j++)
      {
         check = false;

         for(v = 2; v <= i; v++)
         {
            if(i % v == 0 && j % v == 0)
            {
              check = true;      
            }
              
         }
         if(!check)
         {
            count++;
            printf("(%d,%d)\n", i, j);
         }
      }
   }
   printf("Number of pairs of corime integer: %d", count);
   return 0;
}
