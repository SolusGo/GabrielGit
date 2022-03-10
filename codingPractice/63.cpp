#include <iostream>
using namespace std;

int main() {

   int inches;
   int feet;

   cin >> inches;

   feet = inches / 12;
   inches -= feet*12;

   cout << feet << "'" << inches << endl;

   return 0;
}