#include <iostream>
using namespace std;

// Hint: Define MaxFive

int MaxFive(int v, int w, int x, int y, int z)
{
    int max = v;
    if(w > max)
    {
        max = w;
    }

    if(x > max)
    {
        max = x;
    }

    if(y > max)
    {
        max = y;
    }

    if(z > max)
    {
        max = z;
    }

    return max;
}


int main() {
   // Don't modify main's code below
   int v, w, x, y, z;
   int maxVal;
   
   cin >> v; cin >> w; cin >> x; cin >> y; cin >> z;
   maxVal = MaxFive(v, w, x, y, z);
   cout << maxVal << endl;

   return 0;
}