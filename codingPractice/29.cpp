#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numItems;
   vector<int> listItems;
   int currItem;
   int i;
   
   // Get items
   cin >> numItems;
   for (i = 0; i < numItems; ++i) {
      cin >> currItem;
      listItems.push_back(currItem);
   }
   
   /* Type your code here */ 
    int max;
    if(!listItems.empty())
    {
        max = listItems[0];
    }
   for(unsigned int j = 1; j < listItems.size(); j++)
   {
       if(max < listItems[j])
       {
           max = listItems[j];
       }
   }
   

   cout << max << endl;
   return 0;
}

