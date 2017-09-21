#include <stdio.h>

int main(void) {

   int TaxiType, Dist, Day, Hour, Minute, FlagD, DistCharge, DistCharge2, Metered, i;
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

   Metered = FlagD;
   
   if(Dist <= 10000)
   {

      for(i = 0; i < Dist-1000; i = i + 400)
      {
        Metered = Metered + DistCharge;
      }
   }
   else
   {
      for(i = 0; i < 9000; i = i + 400)
      {
        Metered = Metered + DistCharge;
      }

      for(i = 0; i < Dist-10000; i = i + 350)
      {
        Metered = Metered + DistCharge2;
      }
       

   }
   
   if(Day < 6)
   {
      if(Hour >= 6 && Hour < 10 && !(Hour == 9 && Minute > 30))
      {
          Metered *= 1.25;
      }
   }
  

   if(Hour >= 18)
   {
      Metered *= 1.25;
   }
 

   if(Hour < 6)
   {
      Metered *= 1.5;
   }


   printf("%d\n", Metered);

      



   return 0;
}
