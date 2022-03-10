#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */ 
   int hoursAmPm, minAmPm;
   int convertedHours;
   string meridiem, hour_zero = "", min_zero = "";
   cin >> hoursAmPm >> minAmPm >> meridiem;
   //So change hours to 24, leave minAmPm;
    convertedHours = hoursAmPm;

    if(minAmPm < 10)
    {
        min_zero += "0";
    }
    if(meridiem == "am")
    {
        if(hoursAmPm < 10)
        {
            hour_zero += "0";
        }

        if(hoursAmPm == 12)
        {
            convertedHours = 0;
            hour_zero += "0";
        }
    }
    else
    {
        convertedHours += 12;
    }

    cout << hour_zero << convertedHours << ":" << min_zero<< minAmPm << endl;

   return 0;
}