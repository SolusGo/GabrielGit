#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string input;

    cin >> input;

    //Hold a counter for the x's
    int freq = 0;
    bool has_x = true;

  

    while(has_x)
    {
        has_x = false;
        for(int i = 0; i < input.length(); i++)
        {
            if(input.at(i) == 'x')
            {
                input.erase(input.begin()+ i);
                
                freq++;
                has_x = true;
                break;
            }
        }
    }

    for(int i = 0; i < freq; i++)
    {
        input.push_back('x');
    }
    

    cout << input << endl;
    return 0;
}