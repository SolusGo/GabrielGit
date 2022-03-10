#include <iostream>
using namespace std;

int main() {
   int n;
   int i;

   cout << "Enter an integer:" << endl;
   cin >> n;

   cout << "Sequence: ";
   /* Type your code here. */
    if(n < 0)
    {
        cout << "0 " << endl;
    }
    else
    {
        for(i = n; i >= 0; i--)
        {
            if(i % 2 == 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }

   return 0;
}