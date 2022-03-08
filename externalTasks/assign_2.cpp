#include <iostream>
using namespace std;

/*
  a. Create a class SwitchCaseTest with main() method
  b. Declare and initialize a character variable with any alphabet
  c. Find if the character is a vowel and print the result

*/




int main(){
    
    int factorial_num;

    std::cout << "Enter an integer \n";
    
    cin >> factorial_num;
    
    int value = 1;

    for(int i = 1; i <= factorial_num; i++)
    {
        value *= i;
    }

    std::cout << "Factorial of " << factorial_num << " is " << value;
    cout << endl;
    
    return 0;
}