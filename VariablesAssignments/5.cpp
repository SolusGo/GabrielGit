#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	string result;

	/* Type your code here */
	cin >> s;
    result = s.substr(s.length() - 3, 3);

    cout << "Postfix: " << result << endl;
    
	return 0;
}