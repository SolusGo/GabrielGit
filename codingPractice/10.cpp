#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
    double runwayDeg;
    cin >> runwayDeg;
    string output;
    runwayDeg *= 10;
    output = " degrees ";
    if((runwayDeg >= 337.5) || (runwayDeg <= 22.5))
    {
        output = "(north)";
    }
    else if((runwayDeg >= 22.5) && (runwayDeg <= 67.5))
    {
        output = "(northeast)";
    }
    else if((runwayDeg >= 67.5) && (runwayDeg <= 112.5))
    {
        output = "(east)";
    }
    else if((runwayDeg >= 112.5) && (runwayDeg <= 157.5))
    {
        output = "(southeast)";
    }
    else if(((runwayDeg >= 157.5) && (runwayDeg <= 202.5)) )
    {
        output = "(south)";
    }
    else if((runwayDeg >= 202.5 && runwayDeg <= 247.5) )
    {
        output = "(southwest)";

    }
    else if((runwayDeg >= 247.5 && runwayDeg <= 292.5) )
    {
        output = "(west)";

    }
    else if((runwayDeg >=  292.5 && runwayDeg <= 337.5) )
    {
        output = "(northwest)";

    }

    cout << runwayDeg <<" degrees "<< output << endl;

   return 0;
}