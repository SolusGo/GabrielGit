#include <iostream>
#include <vector>
using namespace std;

// Type your code here

int DigitsToNum(vector<int> const digitsList)
{
    int reversed = 0;

    for(int i = digitsList.size() - 1; i > -1; i--)
    {
        reversed = reversed * 10 + digitsList[i];
    }

    return reversed;
}

int main() {
   int userDigit;
   vector<int> digitsList; 
   int resultNum;
   
   while (cin >> userDigit) {
      digitsList.push_back(userDigit);
   }
   
   resultNum = DigitsToNum(digitsList);
   
   cout << resultNum << endl;

   return 0;
}