#include <iostream>
using namespace std;

double calculate_testscore(double gpa, int score)
{
    return ((score- 2.5 * (gpa / 4.0) * 100.0) / 100.0) * 1600.0;
}
int main() {
    double gpa = 3.0;
    int score;
   /* Type your code here. */
    cin >> score;
    for(int i = 0; i <= 10; i++)
    {
        cout << gpa << " "<<calculate_testscore(gpa, score) << endl;
        gpa += 0.1;
    }
   return 0;
}