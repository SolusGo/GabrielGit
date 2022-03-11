#include <iostream>
#include <vector>
using namespace std;

// This method reverses contents of input argument arr.
vector<char> Reverse(vector<char> vect) {
	/* Type your code here */
    vector<char> reversed;
    for(int i = vect.size() - 1; i > -1; i--)
    {
        reversed.push_back(vect[i]);
    }

    return reversed;
}

int main() {
	vector<char> ch(3);
	ch.at(0) = 'a';
	ch.at(1) = 'b';
	ch.at(2) = 'c';

	vector<char> reverseVect = Reverse(ch);

	for (size_t i = 0; i < reverseVect.size(); ++i) {
		cout << reverseVect.at(i);
	}

	return 0;
}