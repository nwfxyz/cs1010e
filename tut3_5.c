#include <stdio.h>


int main(void)
{
   int n;

   scanf("%d",&n);
   for(int i = 1; i <= n; i = i + 1)
   {  
      for(int j = 0; j < i; j = j + 1)
         {
            printf("*");
         }
       printf("\n");
   }

   for(int i = 1; i <= n; i = i + 1)
   {  
      for(int j = 0; j < n-i; j = j + 1)
         {
            printf(" ");
         }
     
      for(int j = 0; j < i; j = j + 1)
         {
            printf("*");
         }
       printf("\n");
   }




  for(int i = 1; i <= n; i = i + 1)
   {  
      for(int j = 0; j < n-i; j = j + 1)
         {
            printf(" ");
         }
     
      for(int j = 0; j < 2*i-1; j = j + 1)
         {
            printf("*");
         }
       printf("\n");
   }


   for(int i = 0; i < n-1; i = i + 1)
   {
      printf(" ");
   }
   printf("*\n");
   
    for(int i = 2; i < n; i = i + 1)
   {  
      for(int j = 0; j < n-i; j = j + 1)
         {
            printf(" ");
         }
     
      printf("*");



      for(int j = 0; j < 2*(i-1)-1; j = j + 1)
         {
            printf(" ");
         }
       printf("*");
       printf("\n");
   }
   for(int i = 0; i < n*2-1; i = i + 1)
      {
         printf("*");
      }

 



   return 0;   
}

