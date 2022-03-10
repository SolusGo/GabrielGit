#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
   
   vector<int> binaryNum(8);
   int digitWeight; 
   int decimalSum = 0; 
   
   // Get user's binary number. Store leftmost bit in element 7, rightmost in 0. 
   // Hint: for (...) {
    for(int i = 0; i < 8; i++)
    {
      cin >> binaryNum.at(i); 
    }
    digitWeight = 7;
    for(int i = 0; i < 8; i++)
    {
        decimalSum += binaryNum[i]*pow(2,digitWeight);
        digitWeight--;
    }

    cout << decimalSum << endl;
   
   /* Type your code here. */
   
   return 0;
}