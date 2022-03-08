#include <iostream>

using namespace std;

// TODO: Write recursive PrintNumPattern() function

void  PrintNumPattern(int num1, int num2, bool started = false, int temp = 0)
{
    if(num1 == temp)
    {
        cout << num1;
        return;
    }
    if(!started)
    {
        temp = num1;
    }

    
    cout << temp << " ";
    
    temp -= num2;

    if(temp < 0)
    {
        num2 *= -1;
    }

    PrintNumPattern(num1, num2, true, temp);


   
}

int main() {
   int num1;
   int num2;

   cin >> num1;
   cin >> num2;
   PrintNumPattern(num1, num2);
   
   return 0;
}