#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1;
	string str2;
	string longest;

    cin >> str1 >> str2;

    longest = str1;

    if(str1.length() <= str2.length())
    {
        longest = str2;
    }

    cout << longest << endl;
   /* Type your code here */

   return 0;
}