#include <iostream>
using namespace std;

int main() {

   string input;
   cin >> input;
   
   if(input == "square")
   {
      cout << "***" << endl;
      cout << "* *" << endl;
      cout << "***" << endl;
   }
   else if(input == "triangle")
   {
      cout << "  *" << endl;
      cout << " * *" << endl;
      cout << "*****" << endl;
   }

   return 0;
}