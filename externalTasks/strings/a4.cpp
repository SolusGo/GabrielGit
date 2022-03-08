#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string input;

    getline(cin, input);

   
   
    string current_str = "";
    string max_str = "";
    bool in_word = false;
    

    for(int i = 0; i < input.length(); i++)
    {
        if(!in_word && input[i] != ' ')
        {
            in_word = true;
            current_str += input[i];

        }
        else if(in_word && input[i] != ' ')
        {
            current_str += input[i];
        }
        else if(in_word && input[i] == ' ')
        {
            in_word = false;

            if(current_str.length() > max_str.length())
            {
                max_str = current_str;
                
            }
            current_str = "";
        }

    }
    

    cout << max_str << endl;
    return 0;
}