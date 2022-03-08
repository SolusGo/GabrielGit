#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    
    string input;

    getline(cin, input);

    string abbr = "";
    
    for(int i = 0; i < input.length(); i++)
    {
        
        if(isupper(input[i]))
        {
            abbr += input[i];
        }
    }
    

    cout << abbr << endl;
    return 0;
}