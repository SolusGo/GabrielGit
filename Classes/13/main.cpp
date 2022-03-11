#include <iostream>
#include "GVdie.h"
using namespace std;

int RollTotal(GVdie d, int total) {
	/* Type your code here */
    int rolls = 0;
    int sum = 0;
    while(sum < total)
    {
        rolls++;
        d.Roll();
        sum += d.GetValue();
        
    }

    return rolls;
}

int main() {
	GVdie die = GVdie();
	die.SetSeed(15); // Create a GVdie object with seed value 15
	int total;
	int rolls;

	cin >> total;
	rolls = RollTotal(die, total); // Should return the number of rolls to reach total.
	cout << "Number of rolls to reach at least " << total << ": " << rolls << endl;

	return 0;
}