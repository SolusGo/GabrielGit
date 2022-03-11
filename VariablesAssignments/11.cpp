#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

   /* Type your code here. */

    double a, b ,c;
    cout << fixed << setprecision(3);

    cin >> a >> b >> c;

    double p = a + b + c;

    double s = p / 2;

    double area = sqrt(s*(s-a)*(s-b)*(s-c));

    cout << "The area of the triangle is: " << area << endl;

   return 0;
}
