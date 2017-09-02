#include <stdio.h>
#include <stdbool.h>


int main(void)
{
   int age;
   bool stp;

   printf("Age: ");
   scanf("%d", &age);
   
   printf("Presence of Sinus Tachycardia (0 for absent, 1 for present): ");
   scanf("%d", &stp);  
 
   printf("\n Age: %d \n", age); 
   printf("\n PST: %d \n",stp);

   return 0;


}

