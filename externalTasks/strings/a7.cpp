#include <iostream>
#include <string>

using namespace std;
int main()
{
    string input;
    getline(cin , input);

    for(int i = 0; i < input.length(); i++)
    {
        if(isalpha(input[i]))
        {
            input[i] += 1;
        }
    }

    cout << input << endl;
    return 0;
}

