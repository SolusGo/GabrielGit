#include <iostream>
#include <vector>
using namespace std;

int main() {
   
   vector<int> yearlyValues(12);
   int i;
   
   // Get vector values
   for (i = 0; i < 12; ++i) {
      cin >> yearlyValues.at(i);
   }
  
   /* Type your code here. */

    int j = 0;
    for(i = 0; i < 3; i++)
    {
        for(int k = 0 ; k< 3; k++)
        {
            cout << yearlyValues[j] << " ";
            j++;
        }

        cout << yearlyValues[j];
        j++;
        cout << endl;
    }
   return 0;
}