#include <stdio.h>
#include <stdbool.h>


int main(void)
{

   int SBP, gender, age, risk, stp;
   do
   {
      printf("Systolic blood pressure: ");
      scanf("%d", &SBP);
   }
   while(SBP <= 0);


   printf("Gender (0 for Male, 1 for Female): ");
   scanf("%d", &gender);
   
   printf("Age: ");
   scanf("%d", &age);
   
   printf("Presence of Sinus Tachycardia (0 for absent, 1 for present): ");
   scanf("%d", &stp);  
 
   printf("\n Age: %d \n", age); 
   printf("\n PST: %d \n",stp);


   printf("\n SBP: %d \n", SBP);
   printf("\n Gender: %d \n", gender);
   printf("\n Age: %d \n", age);


   if(SBP > 91)
   {
      if(gender == 1)
      {

         printf("\n %d \n", age);
         if(age > 55)
         {
            if(stp)
            {         
               risk = 5;
            }
            else
            {
               risk = 4;
            }

         }
         else
         {
             risk = 3;
         }

      }
      else
      {
         if(age > 63)
         {
            if(stp)
               {         
                  risk = 5;
               }
            else
               {
                  risk = 4;
               } 
         }
         else
         {
            risk = 2;
         }

      }
   }
   else
   {
      risk = 1;
   }
   
   printf("Risk Level: %d", risk);


}

