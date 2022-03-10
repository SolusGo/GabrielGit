#include <iostream>
using namespace std;

// Type your code here

void RotateRight3(int &n1, int &n2, int &n3)
{
    int temp1, temp2;
    temp1 = n1;
    temp2 = n2;
    n2 = temp1;
    temp1 = n3;
    n3 = temp2;
    n1 = temp1;

}


int main() {
   int n1, n2, n3;
   
   cin >> n1; 
   cin >> n2;
   cin >> n3;
   
   RotateRight3(n1, n2, n3);
   
   cout << n1 << " " << n2 << " " << n3 << endl;
   
   return 0;
}