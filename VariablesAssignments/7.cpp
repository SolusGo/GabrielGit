#include <iostream>
using namespace std;

int main() {
   int seconds;
   int minutes;
   int hours;

    cin >> seconds;

    hours = (seconds / 60) / 60;
    seconds -= hours*60*60;
    minutes = seconds / 60;
    seconds -= minutes*60;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
   /* Type your code here. */

   return 0;
}