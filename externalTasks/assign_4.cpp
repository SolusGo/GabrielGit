#include <iostream>
using namespace std;

/*
  a. Create a class SwitchCaseTest with main() method
  b. Declare and initialize a character variable with any alphabet
  c. Find if the character is a vowel and print the result

*/




int main(){
    
    int i = 0;
    int current_num = 1;
    int previous_num = 1;
    int temp_num;
    do
    {
        cout << previous_num << " ";
        
        temp_num = current_num;
        current_num = previous_num + current_num;
        previous_num = temp_num;
        i++;
    } while (i < 10);
    cout << endl;
    return 0;
}