#include <iostream>
using namespace std;

const int MILES_PER_GAL = 30;
const int CENTS_PER_GAL = 400;
const int TIRES_MILES = 20000;
const int TIRES_CENTS = 50000;


int CostForMilesGas(int miles)
{
    return (miles * CENTS_PER_GAL) / MILES_PER_GAL;
}   

int CostForMilesMaintenance(int miles)
{

    return ((miles * TIRES_CENTS) / TIRES_MILES) + ((miles * 30000)) / 10000;

}

int CostForMiles(int miles)
{
    int cost = CostForMilesMaintenance(miles) + CostForMilesGas(miles);
    return cost;
}


int main() {

   int miles;
    cin >> miles;
   cout << CostForMiles(miles) << " cents" << endl;

   return 0;
}