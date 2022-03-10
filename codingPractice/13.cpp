#include <iostream>
#include <math.h>
using namespace std;



void sequence(int n)
{
    int temp = n * -1;
    int incr = 1;


    while(true)
    {
        cout << temp << " ";
        if(temp == n)
        {
            break;
        }
        
        temp++;
        
    }

    cout << endl;


    
}

int main() {
   int n;
   int i;

   cout << "Enter an integer:" << endl;
   cin >> n;
   n = fabs(n);
   cout << "Sequence: ";
   sequence(n);

   return 0;
}
