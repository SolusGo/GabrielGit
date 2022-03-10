#include <iostream>
using namespace std;


void check_leap(int year)
{
    bool is_leap = false;

    if(year % 100 == 0)
    {
        if(year % 400 == 0)
        {
            is_leap = true;
        }
    }   
    else
    {
        if(year % 4 == 0)
        {
            is_leap = true;
        }
    }

    if(is_leap)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

int main() {

   /* Type your code here. */
    int year;
    cin >> year;
    check_leap(year);
   return 0;
}