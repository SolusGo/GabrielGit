#include <iostream>
using namespace std;

/*
  a. Create a class SwitchCaseTest with main() method
  b. Declare and initialize a character variable with any alphabet
  c. Find if the character is a vowel and print the result

*/




int main(){
    
    int input_Num, original_num, reverse_num = 0;
     cout << "Enter an Integer " << endl;
    cin >> input_Num;
    original_num = input_Num;

    while(input_Num != 0)
    {
        reverse_num = reverse_num * 10 + (input_Num % 10);
        input_Num /= 10;
    }

    if(reverse_num == original_num)
    {
        cout << original_num << " is a palindrome" << endl;
    }
    else
    {
        cout << original_num << " is not a palindrome" << endl;
    }
    return 0;
}