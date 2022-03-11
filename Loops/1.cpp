#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
    int a, b, d, c = 0;
    cin >> a >> b >> d;

    for(int i = a; i <= b; i++)
    {
        if(i % d == 0)
        {
            c++;
        }

        
    }
    cout << c << endl;
   return 0;
}