#include <iostream>
using namespace std;

void CentsToDollarsCents(int cents, int & x, int & z)
{
    x = cents / 100;
    cents -= 100 * x;
    z = cents;


}

int main() {

   /* Type your code here. */

    int cents, x, y;
    cin >> cents;
    CentsToDollarsCents(cents, x , y);

    cout << x << " dollars " << y << " cents"<< endl;
   return 0;
}