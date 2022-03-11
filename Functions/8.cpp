#include <iostream>
using namespace std;

/* Type your code here */
int Convert(double i)
{
    return static_cast<int>(i);
}
int main() {
	cout << Convert(19.9) << endl;
	cout << Convert(3.1) << endl;

	return 0;
}