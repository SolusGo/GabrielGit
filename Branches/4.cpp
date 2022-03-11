#include <iostream>
#include <string>
using namespace std;

int main() {
	int par;
	int strokes;
	string name;

    cin >> par >> strokes;

    if(par > 5 || par < 3)
    {
        cout << "Error" << endl;
        return 0;
    }
    if(par == strokes + 2)
    {
        cout << "Eagle" << endl;
    }
    else if(par == strokes + 1)
    {
        cout << "Birdie" << endl;
    }
    else if(par == strokes)
    {
        cout << "Par" << endl;
    }
    else if(par + 1 == strokes )
    {
        cout << "Bogey" << endl;
    }
	/* Type your code here */

	return 0;
}