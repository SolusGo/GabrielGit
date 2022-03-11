#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
    string input;
    cin >> input;

    int middle = input.length() / 2;


    cout << "Midfi: " << input.substr(middle - 1, 3) << endl;
    
   return 0;
}