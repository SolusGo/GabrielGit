#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int number;
   cin >> number;
   if(number == 1)
   {
       cout << number << endl;
   }
   int i ;
    while(number != 1)
    {
        for(i = 0; i < 10; i++)
        {
            cout << number << "\t";
            if(number % 2 == 0)
            {
                number /= 2;
            }
            else
            {
                number = number * 3 + 1;
            }
            if(number == 1)
            {
                if(i < 9)
                {
                cout << number;
                }
                else
                {
                    i = -1;
                }
                break;
            }
        }

        cout << endl;
        if(number == 1 && i == -1)
        {
            cout << number << endl;
        }
    }

    
   return 0;
}