#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string input;

    cin >> input;

    //Used for reverse modified string
    string result = "";

    for(int i = input.length() - 1; i > 0; i--)
    {
        result += input.at(i);
        result += "-";
    }

    result += input.at(0);
    

    cout << result << endl;
    return 0;
}