#include <iostream>
using namespace std;

/*
  a. Create a class SwitchCaseTest with main() method
  b. Declare and initialize a character variable with any alphabet
  c. Find if the character is a vowel and print the result

*/




int main(){
    
    char input_char;

    std::cout << "Enter a letter \n";
    
    cin >> input_char;
    
    if ((input_char > 64 && input_char < 91) || (input_char > 96 && input_char < 123))
    {
        switch  (input_char)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':

                cout << input_char << " is a Vowel" << endl;
                break;

            default:
                cout << input_char << " is a Consonant" << endl;

        }
    }
    else
    {
        cout << "Invalid Character" << endl;
    }
    return 0;
}