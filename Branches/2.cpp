#include <iostream>
using namespace std;

int main() {
    int val1;
    int val2;
    int val3;
    int max;
    cin >> val1 >> val2 >> val3;


    max = val1;
    if(max < val2)
    {
        max = val2;
    }
    
    if(max < val3)
    {
        max = val3;
    }

    cout << max << endl;
    /* Type your code here */

    return 0;
}