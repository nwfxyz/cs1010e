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
   printf("Enter amount in cents: ");
   scanf("%d", &input);

 while(sum < (input+20) && twty < 21)
 {
    sum = twty * 20;
    ten = 0;
   while(sum < (input + 10) && ten < 21)
   {
     sum = ten * 10 + twty * 20;     
     five = 0; 
     while(sum < (input + 5) && five < 21)
     {
      one = 0;
      sum = five*5 + twty*20 + ten*10;
      while(sum < (input + 1) && one < 21)
      {
         if(sum == input && sum != 0)
         {
/*            
            printf("1:%d | 5:%d | 10:%d | 20:%d\n",sum-twty*20-ten*10-five*5,five,ten,twty);
 */    
          count++;
         }
         one++;
         sum++;
      }
      five++;
     }
   ten++;
   }
   twty++;
}
   printf("Number of ways to form %d cents: %d\n",input, count);
   return 0;
}
