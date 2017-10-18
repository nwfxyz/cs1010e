#include <stdio.h>
#include <math.h>


double polynomial(double x,int c3, int c2, int c1,int c0);

int graphToGrid(double x, double low, double high, int n);

double gridToGraph(int i, double low, double high, int n);

void findMinMax(int c3, int c2, int c1, int c0, double *y1, double *yh, double x1, double xh);

void plotGraph(int c3, int c2, int c1, int c0, double x1, double xh);



int main(void) {

   int c3,c2,c1,c0,i, yaxis;
   double x1, xh, y1, yh, intv, xc, yc, yint;
 
   yaxis = -99999;
   
   scanf("%d %d %d %d",&c3, &c2, &c1, &c0);
   scanf("%lf %lf", &x1, &xh);
  /* printf("%d %d %d %d", c3,c2,c1,c0);   
 */ 
   printf("Domain: [%lf,%lf]; ",x1,xh);

   plotGraph(c3,c2,c1,c0,x1,xh); 


   return 0;
}

double polynomial(double x,int c3,int c2,int c1,int c0)
{
   double ans;
   ans = c3*pow(x,3) + c2*pow(x,2) + c1*pow(x,1) + c0;
   return ans;
}

void findMinMax(int c3, int c2, int c1, int c0, double *y1, double *yh, double x1, double xh)
{
   double intv,xc,yc,i;

   intv = (xh - x1)/59; 
   xc = x1;
   *yh = -9999;
   *y1 = 9999;
   for(i = 0; i < 60; i++)
   {
      
      yc = polynomial(xc,c3,c2,c1,c0);
      
      if(yc > *yh)
      {
         *yh = yc;
      }

      if(yc < *y1)
      {
         *y1 = yc;
      }
      

      
     
/*      printf("When x = %lf, y = %lf\n",xc,yc); */
      xc = xc + intv;
   }
} 
int graphToGrid(double x, double low, double high, int n)
{
   int ans,i;
   double intv,diff,mindiff, y;
   ans = 0;
   intv = (high - low)/(n-1);
   
   y = low;
   mindiff = high - low;
   for(i = 1; i <= n; i++)
   {
      diff = (x - y);
      if(diff < 0)
      {
         diff = diff * - 1;
      }

      if(diff < mindiff)
      {
         mindiff = diff;
         ans = i;
      }
     y = y + intv;
   }
/*
   if(ans > n)
   {
      ans = 0;
   }
*/ 
   if(x > high+intv || x < low-intv)
   {
      ans = 0;
   }
   return ans;

}

double gridToGraph(int i, double low, double high, int n)
{
   double ans;
   ans = low + ((high - low)/(n-1))*(i - 1); 
   return ans;
}

void plotGraph(int c3, int c2, int c1, int c0, double x1, double xh)
{
   int i,j,k, ypoint, xaxis, yaxis;
   double y1, yh, ans;

   findMinMax(c3,c2,c1,c0,&y1, &yh, x1,xh);
   printf("Range: [%lf,%lf]\n",y1,yh);
   xaxis = graphToGrid(0.0, y1,yh, 20);
   yaxis = graphToGrid(0.0, x1,xh, 60);
   
   
/*   printf("Axis, %d %d" , xaxis, yaxis);
*/
   for(i = 20; i >= 1; i--)
   {
      
      
       for(j = 1; j <= 60; j++)
       {
  
          ypoint = graphToGrid(polynomial(gridToGraph(j, x1,xh, 60),c3,c2,c1,c0), y1, yh , 20);
        /* 
          printf("   j: %d , gridToGraph: %lf, polynomial: %lf, ypoint: %d\n",j,gridToGraph(j,x1,xh,60),polynomial(gridToGraph(j,x1,xh,60),c3,c2,c1,c0),ypoint);
       */     
  
          if(ypoint == i)
          {
            
             
             printf("x");
             
             
          }
          else
          {
             if(j == yaxis && i == xaxis)
             {
                 printf("+");
             }
             else if(j == yaxis)             
             {
                 printf("|");
             }
             else if(i == xaxis)
             {
                printf("-");
             }
             else
             {
                printf(" ");
             }
          }
             
           
       }
       printf("\n");
    }
     
}













