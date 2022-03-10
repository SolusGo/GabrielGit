#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userValues(10);
   vector<int> integers(100, 0);
   int i;
   
   for (i = 0; i < 10; ++i) {
      cin >> userValues.at(i);
      if ( userValues.at(i) < 0)
      {
          cout << "Invalid input: " << userValues.at(i) << " is not in 0-99" << endl;
          return 0;
      }
   }

   for(i = 0; i < 10; i++)
   {
       integers[userValues.at(i)]++;
   }

    int most_frequent = 0;

    for(i = 0; i < 100; i++)
   {
       if(integers[most_frequent] < integers[i])
       {
           most_frequent = i;
       }
   }

   cout << most_frequent << " " << integers[most_frequent] << endl;

   /* Type your code here. */

   return 0;
}