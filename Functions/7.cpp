#include <iostream>
#include <cctype>
using namespace std;

string CheckCharacter(string word, int index) {
	/* Type your code here */
    char a = word[index];
    if(isalpha(a))
    {
        return "Character '" + string(1, a) + "' is a letter";
    }
    else if(isspace(a))
    {
        return "Character '" + string(1, a) + "'" + " is a whitespace";
    }
    else if(isdigit(a))
    {
        return "Character '" + string(1, a) + "' is a digit";
    }

    return "Character \'" + string(1, a) + "\' is unknown";
}

int main() {
	cout << CheckCharacter("happy birthday", 2) << endl;
	cout << CheckCharacter("happy birthday", 5) << endl;
	cout << CheckCharacter("happy birthday 2 you", 15) << endl;
	cout << CheckCharacter("happy birthday!", 14) << endl;

	return 0;
}