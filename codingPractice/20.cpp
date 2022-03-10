#include <iostream>
#include <ctype.h>
using namespace std;

int main() {

   /* Type your code here. */
    string password;
    
    getline(cin, password);
    bool has_letter = false, has_number = false, has_special = false;
    for(unsigned int i = 0; i < password.length(); i++)
    {
        if(isalpha(password[i]))
        {
            has_letter = true;
        }
        else if(isdigit(password[i]))
        {
            has_number = true;
        }
        else if(password[i] == '!' || password[i] == '#' || password[i] == '%')
        {
            has_special = true;
        }

        if(has_letter && has_number && has_special)
        {
            break;
        }
    }

    if(password.length() < 8)
    {
        cout << "Too short" << endl;
    }
    if(!has_letter)
    {
        cout << "Missing letter" << endl;
    }
    if(!has_number)
    {
        cout << "Missing number" << endl;
    }
    if(!has_special)
    {
        cout << "Missing special" << endl;
    }

    if(has_letter && has_number && has_special && password.length() >= 8)
    {
        cout << "OK" << endl;
    }
   return 0;
}