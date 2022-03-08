#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string input;

    getline(cin, input);

   
    
    char temp_value = input[input.length()-1];
    input[input.length()-1] = input[0];
    input[0] = temp_value;

    
    

    cout << input << endl;
    return 0;
}