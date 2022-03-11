#include <iostream>

#include "GVcoin.h"
using namespace std;

int ConsecutiveHeads(GVcoin c, int goal) {
   /* Type your code here */
   int totalFlips = 0, flips = 0;

   while(flips != goal)
   {
       c.Flip();
       totalFlips++;
       if(c.IsHeads())
       {
           flips++;
       }
       else
       {
           flips = 0;
       }
   }

   return totalFlips;

   
}

int main() {
	GVcoin c = GVcoin(15); // Create a GVcoin object with seed value 15
	int numHeads = 5; // Desire 5 consecutive heads
	int flips = ConsecutiveHeads(c, numHeads); // Should return 53 using GVcoin object with seed value 15
	cout << "Total number of flips for 5 consecutive heads: " << flips << endl;
}