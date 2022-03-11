#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	string result;

	/* Type your code here */
	cin >> s;
    result = s.substr(0, 3);

    cout << "Prefix: " << result << endl;
    
	return 0;
}