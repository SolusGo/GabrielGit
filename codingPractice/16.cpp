#include <iostream>
using namespace std;

int main() 
{
   
    int average = 0, invalid = 0, valid = 0, input;

    cin >> input;

    while(input != 0)
    {
        if(input <= 12 && input >= 2)
        {
            valid++;
            average += input;
        }
        else{
            invalid++;
        }

        cin >> input;
    }

    cout << "Average: " << static_cast<double>(average) / valid << endl;
    cout << "Valid: " << valid << endl;
    cout << "Invalid: " << invalid << endl;

   return 0;
}