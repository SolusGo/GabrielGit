#include <iostream>
using namespace std;

/* Type your code here. */

int CountEvens(int a, int b, int c, int d)
{
    int count = 0;
    if(a % 2 == 0)
    {
        count++;
    }
    if(b % 2 == 0)
    {
        count++;
    }
    if(c % 2 == 0)
    {
        count++;
    }
    if(d % 2 == 0)
    {
        count++;
    }

    return count;
}

int main() {
   int result;
   
   result = CountEvens(3, 1, 4, 12);
	cout << "Total evens: " << result << endl; // Expected "Total evens: 2".

   return 0;
}
