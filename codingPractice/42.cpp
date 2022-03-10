#include <iostream>
using namespace std;

int GetAge(int birthMonth, int birthDay, int birthYear, int currMonth, int currDay, int currYear) {

   /* Type your code here. */
   int age = currYear - birthYear - 1;

   if(birthMonth <= currMonth && birthDay <= currDay)
   {
       age++;
   }

   return age;
   
}


int main() {
   int birthMonth, birthDay, birthYear;
   int currMonth, currDay, currYear;
   
   cin >> birthMonth;  cin >> birthDay;  cin >> birthYear;
   cin >> currMonth;   cin >> currDay;   cin >> currYear;
   
   cout << GetAge(birthMonth, birthDay, birthYear, currMonth, currDay, currYear) << endl;

   return 0;
}
