#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
    int required;
    int other_assignsments, other_grades;
    cin >> other_grades; 
    other_assignsments = other_grades * 0.60;

    cout << (90 - other_assignsments) / 0.4 << "%" << endl;

   return 0;
}