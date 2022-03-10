#include <iostream>
using namespace std;

// Define Ascend3() here

void Ascend3(int &x, int &y, int &z)
{
    int temp1 = x, temp2 = y, temp3 = z;
    int swap;
    if(temp3 < temp2)
    {
        swap = temp3;
        temp3 = temp2;
        temp2 = swap;
    }

    if(temp2 < temp1)
    {
        swap = temp2;
        temp2 = temp1;
        temp1 = swap;
    }

    if(temp3 < temp2)
    {
        swap = temp3;
        temp3 = temp2;
        temp2 = swap;
    }

    if(temp2 < temp1)
    {
        swap = temp2;
        temp2 = temp1;
        temp1 = swap;
    }

    x = temp1;
    y = temp2;
    z = temp3;
}
int main() {
   
   int x, y, z;
   
   cin >> x; 
   cin >> y;
   cin >> z;
   
   Ascend3(x, y, z);
   
   cout << x << " " << y << " " << z << endl;


   return 0;
}