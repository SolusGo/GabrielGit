#include <iostream>
#include <string>
using namespace std;

// Type your code here
   
int FindNextCharInString(string inputString, int startIndex, char searchChar)
{
    if(inputString.length() < startIndex + 1)
    {
        return -1;
    }
    int index = -1;
    for(int i = startIndex; i < inputString.size(); i++)
    {
        if(inputString[i] == searchChar)
        {
            index = i;
            break;
        }
    }

    return index;
}
int main() {
   string inputString;
   int startIndex;
   char searchChar;
   
   cin >> inputString;
   cin >> startIndex;
   cin >> searchChar;
   
   cout << FindNextCharInString(inputString, startIndex, searchChar) << endl;

   return 0;
}