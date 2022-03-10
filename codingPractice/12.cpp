#include <iostream>
using namespace std;

void incrementNumbers(string & plate)
{
    char temp;
    bool over = false;
    for(int i = plate.length() - 1; i > -1; i--)
    {
       
        if(i > 2)
        {
            temp = plate[i] + 1;
            
            if(temp > '9')
            {
                
                plate[i] = '0';
                over = true;
            }
            else
            {
                over = false;
                plate[i] += 1;
            }
        }
        else
        {
            temp = plate[i] + 1;
            if(temp > 'Z')
            {
                plate[i] = 'A';
                over = true;
                
            }
            else
            {
                over = false;
                plate[i] += 1;
            }
        }

        if(!over)
        {
            break;
        }
        else if (over && i == 0)
        {
            plate = "AAA000";
        }
    }
}
int main() {

   /* Type your code here. */
    string plate;
    cin >> plate;
    incrementNumbers(plate);
    cout << plate << endl;
   return 0;
}