#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
    double runwayDeg;
    cin >> runwayDeg;
    string output;
    runwayDeg *= 10;
    output = " degrees ";
    if((runwayDeg >= -22.5) && (runwayDeg <= 22.5))
    {
        output = "(north";
    }
    else if((runwayDeg >= 22.5) && (runwayDeg <= 67.5))
    {
        output = "(east";
    }
    else if((runwayDeg >= 67.5) && (runwayDeg <= 112.5))
    {
        output = "(south";
    }
   return 0;
}