#include <iostream>
using namespace std;

int main() {
   int seconds;
   int minutes;
   int hours;

   /* Type your code here. */

    cin >> hours >> minutes >> seconds;

    cout << "Seconds: " << (hours * 60 * 60) + minutes * 60 + seconds << endl;
   return 0;
}
