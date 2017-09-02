#include <stdio.h>


int main(void)
{

int year;


printf("Year: ");
scanf("%i", &year);

if(year % 4 == 0) 
{
   if(year % 100 == 0) 
   { 
      if(year % 400 == 0)
      {
         printf("Year %i is a leap year", year);
      }
      else 
      {
         printf("Year %i is not a leap year", year);
      }



      
   }
   



}
else
{
   printf("Year %i is not a leap year", year);
}

 return 0;



}

