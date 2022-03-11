#include <iostream>

#include "RandomNumbers.h"
using namespace std;

void RandomNumbers::SetRandomValues(int i , int j)
{
    var1 = (rand() % (j - i + 1)) + i;
    var2 = (rand() % (j - i + 1)) + i;
    var3 = (rand() % (j - i + 1)) + i;
    
}
void RandomNumbers::GetRandomValues()
{
    cout << "Random values: " << var1 << " " << var2 << " " << var3 << endl;
}

int RandomNumbers::GetVar1() {return var1;}
int RandomNumbers::GetVar2() {return var2;}
int RandomNumbers::GetVar3() {return var3;}
/* Type your code here */