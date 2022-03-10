#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText; 
   string cleanedText; 
   // Hint: Add declarations as needed
   
   
   getline(cin, userText); 

   /* Type your code here. */
         
   cleanedText = userText;
    bool has_whitespace = true;
   while(has_whitespace)
   {
       has_whitespace = false;
       for(unsigned int i = 0; i < cleanedText.size(); i++)
       {
           if(cleanedText[i] == ' ')
           {
               
                if(i == 0 || i == cleanedText.size() - 1)
                {
                    
                        has_whitespace = true;
                        cleanedText.erase(cleanedText.begin() + i);
                        break;
                    
                }
                else if((cleanedText.at(i - 1) == ' ') && (cleanedText.at(i + 1)  == ' '))
                {
                        has_whitespace = true;
                        cleanedText.erase(cleanedText.begin() + i);
                        break;
                    
                }
           }
       }
   }
   if(cleanedText.length() > 0)
   cout << cleanedText << endl;

   return 0;
}