#include <stdio.h>

int main(void) { 
   
   int i, n, r, fac, fac2, ans, input  ;

   scanf("%d",&input);
   for(n = 0; n <= input; n++)
   {

      for(r = 0; r <= n; r++)
{ /* scanf("%d %d", &n, &r);*/
  fac2 = 1;
  fac = 1;
   for(i = (r+1); i <= n; i++)
   {
      fac = fac * i; 
   }

   for(i = 1; i <= (n-r); i++)
   {
      fac2 = fac2 * i; 
   }
   
   ans = fac/fac2;


   printf("%d ",ans);

   }
   printf("\n");
   }
   /* Values above 12 will have issue as int cannot hold such a large number */
   return 0;
}
