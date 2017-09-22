#include <stdio.h>
#include <stdbool.h>

int main(void) {
   
   int input, num, den, i, j, div;
   bool check;

   scanf("%d", &input);
   
   printf("0/1,");
   for(den = 1; den <= input; den++)
      {
         for(num = 1; num <= den; num++)
         {
            check = false;
            div = 2;
            while(!check && div <= num) 
            {
               if(num % div == 0 && den % div == 0)
               {
                  check = true;
               }
               div++;
            }

            if(!check)
            {
                if(num != 1)
                {
                   printf(",");  
                }
                printf("%d/%d",num,den); 
            
               
            }
         }
         printf("\n");
      }

   return 0;
}
