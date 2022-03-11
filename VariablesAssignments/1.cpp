#include <iostream>
#include <iomanip>   
#include <math.h>    
using namespace std;

int main() {
    int people;
    int numPizzas;
    double cost = 14.95;

    
    cin >> people;
   
    numPizzas = ceil((people * 2.0)/12);
    cout << fixed << setprecision(2);
    cout << "Pizzas: " << numPizzas << endl;
    cout << "Cost: $" <<  numPizzas*cost << endl;
}