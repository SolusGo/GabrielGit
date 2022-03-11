#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int numPizza;
	double subTotal;
	double totalDue;
	
	/* Type your code here */
	cin >> numPizza;
    cout << fixed << setprecision(2);
    subTotal = numPizza * 9.99;
    totalDue = subTotal + subTotal*0.06;
    cout << "Subtotal: $" << subTotal << endl;
    cout << "Total due: $" << totalDue << endl;
	return 0;
}