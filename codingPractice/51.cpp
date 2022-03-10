#include <iostream>
#include <string>
using namespace std;

// Type your code here

string NumToStringWithCommas(int number)
{
    string result = to_string(number);


       
        int location = 0;
        for(int i = result.length() - 1; i > -1; i--)
        {
            location++;
            if(location == 3 && i != 0)
            {
                result.insert(result.begin() + i, ',');
                location = 0;
            }
        }

   
    return result;
}

int main() {
   int userNum;
   
   cin >> userNum;
   
   cout << NumToStringWithCommas(userNum) << endl;
   
   return 0;
}