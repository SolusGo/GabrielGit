#include <iostream>
#include <vector>
using namespace std;

void printarr(const vector<int>& target)
{
    cout << "[ ";
    for(size_t i = 0; i < target.size(); i++)
    {
        cout << target[i] << " ";
    }

    cout <<  "]" << endl;
}

void bubblesort(vector<int>& target)
{
    int temp, counter = 1;
    for(size_t i = target.size() - 1; i > 0; i--)
    {
        for(size_t j = 0; j < i; j++)
        {
            if(target[j] > target[j + 1])
            {
                temp = target[j];
                target[j] = target[j+ 1];
                target[j+1] = temp;
            }
        }
        cout << counter << " ";
        printarr(target);
        counter++;
    }
}

void selectionsort(vector<int>& target)
{
    int temp, counter = 1;
    //Biggest value;
    
    int big_index;
    
    for(int i = target.size() - 1; i > 0; i--)
    {
       
        big_index = 0;
        for(int j = 1; j <= i; j++)
        {
            if(target[j] > target[big_index])
            {   
                big_index = j;
            }
        }

        if(big_index < i)
        {
            
            temp = target[i];
            target[i] = target[big_index];
            target[big_index] = temp;
        }

        
        cout << counter << " ";
        printarr(target);
        counter++;
    }
}

void insertionSort(vector<int>& target)
{
    int temp, counter = 1;
    for(int i = 1; i < target.size(); i++)
    {
        for(int j = i; j > 0 ; j--)
        {
            if(target[j] < target[j - 1])
            {
                temp = target[j];
                target[j] = target[j - 1];
                target[j - 1] = temp;

            }
            else
            {
                break;
            }
        }

        cout << counter << " ";
        printarr(target);
        counter++;
    }
}



int main(int argc, char* argv[]) {

    vector<int> numbers;
    int option, size, temp;
    option = atoi(argv[1]);

    cout << "Enter size of vector" << endl;
    cin >> size;
    cout << "Enter numbers" << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> temp;
        numbers.push_back(temp);
    }

    cout << "Before Sorting: " << endl;
    printarr(numbers);

    switch(option)
    {
        case 0:
            cout << " << BUBBLE SORT >> " << endl;
            bubblesort(numbers);
            break;
        case 1:
            cout << " << SELECTION SORT >> " << endl;
            selectionsort(numbers);
            break;

        case 2:
            cout << " << INSERTION SORT >> " << endl;
            insertionSort(numbers);
    }
   
   return 0;
}