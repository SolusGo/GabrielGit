#include <iostream>

#include "GVcoin.h"
using namespace std;

int FlipForTails(GVcoin c, int goal) {
	int totalFlips = 0, flips = 0;

   while(flips != goal)
   {
       c.Flip();
       totalFlips++;
       if(!c.IsHeads())
       {
           flips++;
       }
       
   }

   return totalFlips;

}

int main() {
	GVcoin c = GVcoin(15);   // Create a GVcoin object with seed value 15
	int numTails = 100;   // Desire 100 tails
	int total = FlipForTails(c, numTails); // Should return 216 using GVcoin object with seed value 15
	cout << "Total number of flips for 100 tails: " << total << endl;
}