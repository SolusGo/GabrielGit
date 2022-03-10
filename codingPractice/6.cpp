#include <iostream>
using namespace std;

int main() {
   string userCaption; 
   
   getline(cin, userCaption);

    char last_char = userCaption[userCaption.length() - 1];
    bool is_valid = false;
    if(last_char == '!' || last_char == '?' )
    {
        is_valid = true;

    }

    if(last_char == '.')
    {
        if(userCaption.length() > 1)
        {
            if(userCaption[userCaption.length() - 2] == '.')
            {   
                if(userCaption.length() > 2)
                {
                    if(userCaption[userCaption.length() - 3] != '.')
                    {
                        userCaption.pop_back();
                        
                    }
                    is_valid = true;
                }
                else
                {
                    userCaption.pop_back();
                    is_valid = true;
                }
            }
        }
        else
        {
             is_valid = true;
        }
    }

    if(!is_valid)
    {
        userCaption.push_back('.');

    }

    cout << userCaption << endl;
    

   return 0;
}