#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<bool> chptList(16); // Valid chapters are 1-15. 1 means include, 0 exclude. Element 0 unused. 
   bool includeChpt, no_valid = false;
   int i, j;
   
   // Get the chapter selections
   for (i = 1; i <= 15; ++i) {
      cin >> includeChpt; 
      if (includeChpt) {
         chptList.at(i) = true;
      }
      else {
         chptList.at(i) = false;
      }
   }
    int valid_chap = 0, initial_chap;

   for(i = 1; i <= 15; ++i)
   {
       if(valid_chap == 0 && chptList.at(i))
       {
           cout << i;
           valid_chap =1;
           initial_chap =i;
           no_valid = true;
       }
       else if(valid_chap == 1 && !chptList.at(i))
       {
           if(initial_chap != i - 1 && initial_chap != i - 2)
           {
           cout << "-" << i - 1;
           }
           else if(initial_chap != i - 1 && initial_chap == i - 2)
           {
               cout << " " << i- 1;
           }

           cout << " ";
           valid_chap = 0;
       }
   }

   if(valid_chap == 1)
   {
       if(initial_chap != i - 1)
       {
           cout << "-" << i - 1;
           
           
       }
        cout << " ";
   }

   if(!no_valid)
   {
       cout << "None ";
   }
   
   

   cout << endl;
   

   /* Type your code here. */

   return 0;
}