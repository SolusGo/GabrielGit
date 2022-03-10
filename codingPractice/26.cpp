#include <iostream>
#include <cmath>
#include <limits>
using namespace std;


double calc_hyp(double i, double j)
{
    double hyp = sqrt( j * j - i * i);
   
    return hyp;
}
int main() {

   /* Type your code here. */
   double dimension;
   
    cin >> dimension;
    
    for(double i = 1.0; i < dimension; i += 1.0)
    {
       
            
        if(calc_hyp(i, dimension) < i)
        {
            cout << i << " " << calc_hyp(i, dimension) << endl;
            
        }
            
        
    }
   return 0;
}