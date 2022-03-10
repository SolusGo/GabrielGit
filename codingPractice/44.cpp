#include <iostream>
#include <vector>
using namespace std;

void SimulateLine(vector<int> customerArrivals) {
   
   /* Type your code here. */
   int line_length = 0;

   for(int i = 0; i < 10; i++)
   {
       
       line_length += customerArrivals[i];

       cout << line_length << " ";
       if(line_length > 0)
       {
        line_length--;
       }
   }
   cout << endl;
}


int main() {
   int i;
   vector<int> customerArrivals(10);
    
   // Get customer arrival data
   for (i = 0; i < 10; ++i) {
      cin >> customerArrivals.at(i);
   }

   SimulateLine(customerArrivals);

   return 0;
}