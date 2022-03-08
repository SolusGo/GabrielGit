#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    
    string input;

    getline(cin, input);

   
   
    bool in_word = false;
    int position = 0;
    int index = 0;
    string abbr = "";
    string new_word = "";
    for(int i = 0; i < input.length(); i++)
    {
        if(!in_word && input[i] != ' ')
        {
            new_word += input[i];
            in_word = true;
        }
        else if(in_word && input[i] != ' ')
        {
            new_word += input[i];
        }
        else if(in_word && (input[i] == ' ' || input[i] == '\0'))
        {
            in_word == false;

            abbr += toupper(new_word[position]);
            new_word = "";
            position++;
            
        }
    }

    if(in_word)
    {
        abbr += toupper(new_word[position]);
    }
    

    cout << abbr << endl;
    return 0;
}