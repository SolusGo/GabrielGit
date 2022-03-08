#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
   
    /* Type your code here. */
    string input = "";
    int index; 
    string word_1, word_2;
    istringstream iSS;
    
    while(input != "q")
    {
        
        cout << "Enter input string:" << endl;

        getline(cin , input);
        if((input.find(",") == string::npos) && input != "q")
        {
            cout << "Error: No comma in string." << endl;
            continue;
        }
        index = input.find(",");
        
        input.replace(index, 1, " ");

        iSS.clear();
        iSS.str(input);

        iSS >> word_1;
        iSS >> word_2;

        cout << "First Word: " << word_1 << endl;
        cout << "Second Word: " << word_2 << endl;



    }
    return 0;
}