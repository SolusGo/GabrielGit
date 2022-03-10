#include <iostream>
#include <cmath>
using namespace std;

int main() {

   /* Type your code here. */
    int size, curr_num, prev_num, max = 0;
    cin >> size;

    if(size > 0)
    cin >> prev_num;

    for(int i = 0; i < size - 1; i++)
    {
        cin >> curr_num;

        if(max < fabs(curr_num - prev_num))
        {
            max = fabs(curr_num - prev_num);
        }

        prev_num = curr_num;
    }

    cout << max << endl;
   return 0;
}

// 59, 61, 63 , 68, 