#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */

    int max, input;

    cin >> input;
    max = input;

    while(input > -1)
{
        if(max < input)
        {
            max = input;
        }

        cin >> input;
}

cout << max << endl;
    
   return 0;
}