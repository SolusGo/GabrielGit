#include <iostream>
#include <string>
using namespace std;

// Type your code here
   
int FindNextSubstr(string inputString, int startIndex, string searchStr)
{
    if(inputString.length() < startIndex + 1)
    {
        return -1;
    }
    int index = -1;
    
    index = inputString.find(searchStr, startIndex);

    if(index == string::npos)
    {
        index = -1;
    }

    return index;
}
int main() {
   string inputString;
   int startIndex;
   string searchStr;
   
   cin >> inputString;
   cin >> startIndex;
   cin >> searchStr;
   
   cout << FindNextSubstr(inputString, startIndex, searchStr) << endl;

   

   return 0;
}