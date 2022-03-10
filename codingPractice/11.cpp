#include <iostream>
using namespace std;

int main() {
   string firstName1, lastName1;
   string firstName2, lastName2;
   string firstName3, lastName3;
   
   cin >> firstName1;   cin >> lastName1;
   cin >> firstName2;   cin >> lastName2;
   cin >> firstName3;   cin >> lastName3;
    int count = 0;
    string output= "";

   /* Type your code here. */

    
    if(firstName1 != "none")
    {
        count += 1;
    }
    if(firstName2 != "none")
    {
        count += 1;
    }
    if(firstName3 != "none")
    {
        count += 1;
    }


    if(count == 3)
    {
        cout << lastName1 << " / " << lastName2 << " / ...";
    }
    else if (count == 2)
    {
        if(firstName1 != "none")
        {
            output += lastName1;
            output += " / ";

            if(firstName2 != "none")
            {
                output += lastName2;
            }
            else
            {
                output += lastName3;
            }
        }
        else
        {
            output += lastName2;
            output += " / ";
            output += lastName3;
        }
        
    }
    else if(count == 1)
    {
        if(firstName1 != "none")
        {
            output += firstName1[0];
            output += ". ";
            output += lastName1;
        }
        else if(firstName2 != "none")
        {
            output += firstName2[0];
            output += ". ";
            output += lastName2;
        }
        else 
        {
            output += firstName3[0];
            output += ". ";
            output += lastName3;
        }
    }
    else
    {
        output += "TBD";
    }

    cout << output << endl;

   return 0;
}