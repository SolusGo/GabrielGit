#include <iostream>
using namespace std;

int main() {

   int num_of_ints, sum, input, valid = 1;

   cin >> num_of_ints;
   valid = num_of_ints;
   while(valid > 0)
   {
       sum = 0;
       
       for(int i = 0; i < num_of_ints;i++)
       {
           cin >> input;
           sum += input;
       }
       
        
       
       cout << sum << endl;
       if(input != 0)
       cin >> valid;
       else
       valid = input;
   }
    
   return 0;
}