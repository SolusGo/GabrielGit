#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

   /* Type your code here. */
    double a, b;
    double c;

    cin >> a >> b;

    c = sqrt(a*a + b*b);
    cout << fixed << setprecision(2);
    cout << "Hypotenuse: " << c << endl;

   return 0;
}