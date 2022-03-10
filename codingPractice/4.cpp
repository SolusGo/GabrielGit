#include <iostream>
using namespace std;

int main() {
   int passengerAge;
   int carryOns;
   int checkedBags; 
   int airFare; 
   
   cin >> passengerAge;
   cin >> carryOns;
   cin >> checkedBags; 

    airFare = 0;
   /* FIXME: Type your code here. */
   if(passengerAge >= 60)
   {
       airFare += 290;
   }
   else if(passengerAge > 2)
   {
       airFare += 300;
   }

   airFare += carryOns * 10;

   if(checkedBags == 2)
   {
       airFare += 25;
   }
    else if(checkedBags > 2)
    {
        airFare += 25;
        airFare += (checkedBags - 2) * 50;
    }


   cout << airFare << endl;

   return 0;
}