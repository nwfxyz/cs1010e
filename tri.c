#include <stdio.h>

int main(void) {

   int input, i, j, a, b, sum;
   scanf("%d", &input);

   a = 1;
   for(i = 0; i < input; i++)
   {
      sum = 0;
     for(j = 0; j < input; j++)
     {

      sum = a + j + sum;
      if(j >= (i))
      {
      
         printf("%d",sum - i);
         if(j != input-1)
         {
            printf(",");
         }
      }
      

    }
     printf("\n");
            
   }

   return 0;
}
