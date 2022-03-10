#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> listNums;
   unsigned int currNum;
   int i; 
   int tmp;
   unsigned int listSize;
   
   while (cin >> currNum) {
      listNums.push_back(currNum);
   }
   
   listSize = listNums.size();
   
   // Reverse listNums in place. 
   /* Type your code here. */
   int temp;
   for(int i = 0; i < listSize / 2; i++)
   {
       temp = listNums[listSize - 1 - i];
       listNums[listSize - 1 - i] = listNums[i];
       listNums[i] = temp;
   }
   

   for (i = 0; i < listNums.size(); ++i) {
      cout << listNums.at(i) << " ";
   }
   cout << endl;

   return 0;
}