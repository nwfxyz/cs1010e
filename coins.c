#include <stdio.h>

int main(void) {
   
   int input, twty, ten, five, one, count, sum;

   input = 0;
   twty = 0;
   ten = 0;
   five = 0;
   one = 0;
   count = 0;
   sum = 0;
   scanf("%d", &input);

 while(sum < (input+20))
 {
    sum = twty * 20;
    ten = 0;
   while(sum < (input + 10))
   {
      sum = ten * 10 + twty*20;
     five = 0; 
     while(sum < (input + 5))
     {
      sum = five*5 + twty*20 + ten*10;
      while(sum < (input + 1))
      {
         if(sum == input)
         {
            printf("1:%d | 5:%d | 10:%d | 20:%d\n",sum-twty*20-ten*10-five*5,five,ten,twty);
            count++;
         }
         sum++;
      }
      five++;
     }
   ten++;
   }
   twty++;
}
   printf("%d", count);
   return 0;
}
