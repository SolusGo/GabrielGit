#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   int numItems;
   vector<string> listItems;
   string currItem;
   int i;
   
   // Get items
   cin >> numItems;
   for (i = 0; i < numItems; ++i) {
      cin >> currItem;
      listItems.push_back(currItem);
   }
  
   /* Type your code here */ 
   int big_seq = 0, curr = 0;
    for(i = 0; i < numItems; i++)
    {
        if(listItems[i] != "I")
        {
            curr++;
        }
        else
        {
            if(big_seq < curr)
            {
                big_seq = curr;
                
            }
            curr = 0;
        }
    }

    if(big_seq < curr)
            {
                big_seq = curr;
                curr = 0;
            }

    cout << big_seq << endl;
   return 0;
}