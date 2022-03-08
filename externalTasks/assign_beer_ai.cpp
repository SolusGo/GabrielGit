#include <iostream>
using namespace std;

int make_move(int x);
bool valid_option(int x);

int main(){
    
    int  bottles = 21;
    int bottles_picked_up;
    bool ai_turn, wrong_move = false;
    string option;
    std::cout << "There are 21 beer bottles???\n";
    std::cout << "Will you like to play first?\n";
    
    cin >> option;
    
    
    while(bottles > 1)
    {
        if(option == "Yes")
        {
            
            cout << "How many would you like to pick up?\n";
            cin >> bottles_picked_up;
            if(!valid_option(bottles_picked_up))
            {
                cout << "Please enter a valid number \n";
                continue;
            }
            bottles -= bottles_picked_up;
            bottles -= make_move(bottles);
            ai_turn = false;
        }
        else
        {   
            if(!wrong_move)
            {
                bottles -= make_move(bottles);
                cout << "Bottles remaining : " << bottles << endl;
                cout << "How many would you like to pick up?\n";
            }
            
            cin >> bottles_picked_up;
            if(!valid_option(bottles_picked_up))
            {
                cout << "Please enter a valid number \n";
                wrong_move = true;
                continue;
            }
            if(wrong_move)
            {
                wrong_move = false;
            }
            bottles -= bottles_picked_up;
        }

        cout << "Bottles remaining : " << bottles << endl;
    }


    
    return 0;
}

bool valid_option(int x)
{
    if(x > 0 && x < 5)
    {
        return true;
    }
    return false;
}
//This is the AI
int make_move(int x)
{
    int i = 1;
    

   
   for(i = 4; i > 1; i--)
    {
        if(x > 6)
        {
            if((x - i) % 5 == 1)
            {
                break;
            }
        }
        else
        {
            if(x - i == 1)
            {
                break;
            }
        }
    }
    
    cout << "Computer has picked " << i << endl;
    return i; 
}