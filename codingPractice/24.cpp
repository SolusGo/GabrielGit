#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here */ 
   bool in_word = false;
   int total_words = 0;
    string line;
    getline(cin, line);

    for(unsigned int i = 0; i < line.length() ; i++)
    {
        if(line[i] != ' ' && !in_word)
        {
            in_word = true;
        }
        else if(line[i] == ' ' && in_word)
        {
            in_word = false;
            total_words++;
        }
    }

    if(in_word)
    {
        total_words++;
    }

    cout << total_words << endl;
   



   return 0;
}