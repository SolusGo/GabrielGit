#include <iostream>
#include <vector>

using namespace std;

int main() {
   vector<int> userValues(10);
   int i, sum = 0, min, max;
   
   for (i = 0; i < 10; ++i) {
      cin >> userValues.at(i);
   }
   
    min =userValues[0];
    max = userValues[0];
   for(i = 0; i < userValues.size(); i++)
   {
       if(min > userValues[i])
       {
           min = userValues[i];
       }

       if(max < userValues[i])
       {
           max = userValues[i];
       }

       sum += userValues[i];

   }

   
   cout << min << " " << max << " " << sum/static_cast<double>(userValues.size()) << endl;
   
   return 0;
}