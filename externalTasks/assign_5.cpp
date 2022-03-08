#include <iostream>
using namespace std;





int main(){
    
    bool is_prime = false;
    for(int i = 2; i <= 100; i++)
    {
        is_prime = true;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                is_prime = false;
                break;
            }
        }

        if(is_prime)
        {
            std::cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}