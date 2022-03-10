#include <iostream>
#include <cstdlib>
using namespace std;

/* Type your code here */ 

bool FirstRectangleSmaller(int r1xul, int r1yul, int r1xbr, int r1ybr, int r2xul, int r2yul, int r2xbr, int r2ybr)
{
    int l1 = abs(r1xul - r1xbr);
    int w1 = abs(r1yul - r1ybr);
    int l2 = abs(r2xul - r2xbr);
    int w2 = abs(r2yul - r2ybr);

    int a1 = l1*w1, a2 = l2*w2;

    if(a1 < a2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
   int r1xul, r1yul, r1xbr, r1ybr; // x upper-left, y upper-left, x bottom-right, y bottom-right
   int r2xul, r2yul, r2xbr, r2ybr;
   
   cin >> r1xul; cin >> r1yul; cin >> r1xbr; cin >> r1ybr;
   cin >> r2xul; cin >> r2yul; cin >> r2xbr; cin >> r2ybr;

   cout << FirstRectangleSmaller(r1xul, r1yul, r1xbr, r1ybr, r2xul, r2yul, r2xbr, r2ybr) << endl;

   return 0;
}
