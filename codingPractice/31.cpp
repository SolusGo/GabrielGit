#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> listInts(6); 
   vector<int> listNegInts;
   // Hint: Declare listNegInts
   unsigned int i;
   
   // Get input integers
   for (i = 0; i < 6; ++i) {
      cin >> listInts.at(i);
   }

   for(int i = 0; i < 6; i++)
   {
       if(listInts[i] < 0)
       {
           listNegInts.push_back(listInts[i]);
       }
   }


   cout << listNegInts.size() << endl;

   for(int i = 0; i < listNegInts.size(); i++)
   {
       cout << listNegInts[i] << endl;
   }

   /* Type your code here. */

   return 0;
}