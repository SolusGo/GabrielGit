#include <iostream>
using namespace std;

int main() {

   int size, prev, curr;
   //Assume sorted
   bool is_sorted = true;
    cin >> size;
    if (size > 0)
    {
        cin >> prev;
    }

    for(int i = 0; i < size - 1; i++)
    {
        cin >> curr;

        if(curr <= prev)
        {
            
            is_sorted = false;
            break;
        }

        prev = curr;
    }

    if(is_sorted)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Unsorted" << endl;
    }
   return 0;
}