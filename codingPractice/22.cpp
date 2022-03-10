#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int numbers;
    cin >> numbers;
    int num_arr[numbers];

    for(int i = 0; i < numbers; i++)
    {
        cin >> num_arr[i];
    }

    for(int i = 0; i < numbers - 1; i++)
    {
        cout << num_arr[i] << ", ";
    }

    cout << num_arr[numbers-1] << "." << endl;
   return 0;
}