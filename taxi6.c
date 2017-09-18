#include <stdio.h>

int main(void) {
   
   int TaxiType,Dist,Day,Hour,Minute,FlagD, DistFee, DistCharge, DistCharge2, Metered; 
   
   
   DistFee = 0;
   
   scanf("%d%d%d%d%d", &TaxiType, &Dist, &Day, &Hour, &Minute);

   if(TaxiType == 1)
   {
      FlagD = 340;
      DistCharge = 22;
      DistCharge2 = 22;
   }

   if(TaxiType == 2)
   {
      FlagD = 390;
      DistCharge = 22;
      DistCharge2 = 22;
   }

   if(TaxiType == 3)
   {
      FlagD = 500;
      DistCharge = 33;
      DistCharge2 = 33;
   }

   
    if(Dist <= 10000)
     {
         for(int i = 0; i < Dist-1000; i = i + 400)
         {
            DistFee = DistFee + DistCharge;
        }
     }
      else
      {
         for(int i = 0; i < 9000;i =  i + 400)
         {
            DistFee = DistFee + DistCharge;
         }

         for(int i = 0; i < Dist - 10000; i = i + 350)
         {
            DistFee = DistFee + DistCharge2; 
         }

      }
      
      Metered = DistFee +FlagD;

     if(Day < 6)
     {
         if(Hour >= 6 && Hour < 10 )

         {
            if(Hour == 9 && Minute > 30)
            {
            }
            else
            {
               Metered = Metered * 125/100;
            }

         }
     }
     else
     {
        if(Hour >= 18 && Hour < 24)
        {
           Metered = Metered + Metered * 25/100;
        }
     }

     if(Hour < 6)
     {
         Metered = Metered * 150/100;
     }


/*  printf("%d\n%d\n%d\n%d\n%d\n", Metered,DistCharge2,DistCharge,DistFee,FlagD); 

  */ 

   printf("$%d.%d",Metered/100,(Metered - Metered/100*100)/10 * 10);
   

   return 0;
}
