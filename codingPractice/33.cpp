#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {

    vector<int> inputs(21, 0);
    string input;
    int data;
    vector<int> score;
    istringstream  inSS;
    int index = 0, pins;
   /* Type your code here. */
    getline(cin, input);
    inSS.str(input);

    while(inSS >> data)
    {
        inputs[index] = data;
        index++;
    }
    index = 0;
    int curr_score = 0;
    for(int i = 0; i < 9; i++)
    {
        
        pins = 10;
        pins -= inputs[index];
        curr_score+= inputs[index];
        index++;
        if(pins == 0)
        {
            curr_score += inputs[index];
            curr_score += inputs[index + 1];
        }
        else
        {
            pins -= inputs[index];
            curr_score += inputs[index];
            if(pins == 0)
            {
                curr_score += inputs[index + 1]; 
                
            }
            index++;
            
            
        }
        score.push_back(curr_score);
    }
    pins = 10;
    pins -= inputs[index];
    curr_score += inputs[index];
    index++;
    if(pins == 0)
    {
        
        
        curr_score += inputs[index];
        index++;
        curr_score += inputs[index];
    }
    else
    {
        curr_score += inputs[index];
        pins -= inputs[index];
        index++;
        if(pins == 0)
        {
            
            curr_score +=inputs[index] ;
            index++;
        }

    }

    score.push_back(curr_score);

    for(int i = 0; i < 10; i++)
    {
        cout << score[i] << " ";
    }
    cout << endl;
   return 0;
}