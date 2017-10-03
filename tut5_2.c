#include <stdio.h>

int main(void) {

   int input; int prev1; int prev2; int valley;
   input = -1, prev1 = -1, prev2 = -1;
   scanf("%d", &input);
   valley = -1;
  
  do
   {  
      if(prev1 < input && prev2 > prev1 && prev1 > valley)
      {
         valley = prev1;
      }

      if(prev1 != input)
      {
       prev2 = prev1;
       prev1 = input;
      }
      scanf("%d", &input);
   }
   while(input != -1);
   if(valley != -1)
   {
       printf("%d\n", valley);
   }
   else
   {
       printf("NONE\n");
   }
   return 0;
}
