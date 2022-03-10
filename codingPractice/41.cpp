#include <iostream>
#include <cmath>
using namespace std;


// All x, y coordinates are in miles from the origin 0, 0. 
int PickupMinutes(int userX, int userY, int d1X, int d1Y, int d2X, int d2Y, int d3X, int d3Y) {
   
   // Finish this function
   double dist1 = fabs(userX - d1X) + fabs(userY - d1Y);
   double dist2 = fabs(userX - d2X) + fabs(userY - d2Y);
   double dist3 = fabs(userX - d3X) + fabs(userY - d3Y);

    double short_d = dist1;
    if (short_d > dist2)
    {
        short_d = dist2;
    }
    if(short_d > dist3)
    {
        short_d = dist3;
    }
    return short_d*2;
   
}


int main() {
   int userX, userY;
   int d1X, d1Y;
   int d2X, d2Y;
   int d3X, d3Y;
   
   cin >> userX; 
   cin >> userY;
   cin >> d1X;
   cin >> d1Y;
   cin >> d2X;
   cin >> d2Y;
   cin >> d3X;
   cin >> d3Y;
   
   cout << PickupMinutes(userX, userY, d1X, d1Y, d2X, d2Y, d3X, d3Y) << endl;
   
   return 0;
}

