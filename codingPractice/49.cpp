#include <iostream>
using namespace std;

double CalculateMonthElectricCost(double monthKWh, double tier1Cutoff, double tier1Cost, 
                                  double tier2Cutoff, double tier2Cost, double tier3Cost) {

   // Type your code here

    double remainingKWh = monthKWh;
    double monthCost = 0.0;

    if(remainingKWh > tier2Cutoff)
    {
        remainingKWh -= tier2Cutoff;
        monthCost += remainingKWh * tier3Cost;
    }

    if(remainingKWh > tier1Cutoff)
    {
        remainingKWh -= tier1Cutoff;
        monthCost += remainingKWh * tier2Cost;
    }

    monthCost += remainingKWh * tier1Cost;

    return monthCost;

}


int main() {
   double monthKWh;
   double tier1Cutoff, tier2Cutoff; // In kWh
   double tier1Cost, tier2Cost, tier3Cost; // In $ per kWh
   double monthCost;
   
   cin >> monthKWh;
   cin >> tier1Cutoff;  
   cin >> tier1Cost;
   cin >> tier2Cutoff;
   cin >> tier2Cost;
   cin >> tier3Cost;
   
   monthCost = CalculateMonthElectricCost(monthKWh, tier1Cutoff, tier1Cost, tier2Cutoff, tier2Cost, tier3Cost);
   cout << "$" << monthCost << endl;
   
   return 0;
}