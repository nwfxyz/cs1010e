#include <stdio.h>


int main(void)
{
   double a;
   printf("Let a be: ");
   scanf("%lf", &a);

   if(a<0){
      a = a + 3;
   } 
   else if(a<500)
      {
      a = a*2;
      }
      else if(a<1000)
      {
      a = a*10;
      }
      else{
      a = 0;
      
      }

      printf("Answer: %lf",a);
      return 0;








}




