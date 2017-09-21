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

   for(i = 0; i < Dist-1000; i = i + 400)
   {
      Metered = Metered + DistCharge;
   }

   printf("%d\n", Metered);





   return 0;
}
