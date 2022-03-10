#include <iostream>
using namespace std;


int check_month(int x)
{
   int type_of_month;

   if(x == 11 || x == 4 || x == 6 || x == 9)
   {
      type_of_month = 1;
   }
   else if( x == 12)
   {
      type_of_month = 2;
   }
   else if (x == 2)
   {
      type_of_month = 3;
   }
   else
   {
      type_of_month = 0;
   }

   return type_of_month;

}



int main() {

   /* Type your code here. */
   int month, day, year;
   int type_month;
   cin >> month >> day >> year;
   type_month = check_month(month);

   if(type_month == 1 && day == 30)
   {
      month += 1;
      day = 1;
   }
   else if(type_month == 0 && day == 31)
   {
      month += 1;
      day = 1;
   }
   else if(type_month == 2 && day == 31)
   {
      year += 1;
      day = 1;
      month = 1;
   }
   else if(type_month == 3 && day == 28)
   {
      month += 1;
      day = 1;
   }
   else
   {
      day++;

   }

   printf("%i %i %i\n", month, day, year);


   return 0;
}