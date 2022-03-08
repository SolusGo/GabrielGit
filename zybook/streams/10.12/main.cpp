#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
//FIXME: stringstream library
//FIXME: stream manipulation library
using namespace std;

bool valid_input(string input)
{
   
    string temp_str;
    int commas = 0;
   
    bool valid = false;
    bool is_number = true;
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == ',')
        {
            commas++;
        }
    }

    if(commas < 1)
    {
        cout << "Error: No comma in string." << endl;
    }
    else if(commas > 1)
    {
        cout << "Error: Too many commas in input." << endl;
    }
    else
    {
        temp_str = input.substr(input.find(",") + 2);
        for(int i = 0; i < temp_str.length(); i++)
        {
            if(!isdigit(temp_str[i]))
            {
                is_number = false;
            }
        }
        if(!is_number)
        {
            cout << "Error: Comma not followed by an integer." << endl;
        }
        else
        {
            valid = true;
            
        }
    }
    
    cout << endl;
    return valid;


}

void insert_data(string data, vector<string> & strings, vector<int> &ints)
{
    string name;
    int number;
    int index = data.find(",");
    name = data.substr(0, index);
    number = stoi(data.substr(index + 2));
    cout << "Data string: " << name << endl;
    cout << "Data integer: " << number << endl;
    strings.push_back(name);
    ints.push_back(number);
}

void output_table(string title, string col_1, string col_2, vector<string> const strings, vector<int> const &ints)
{
    cout << setw(33) << right << title << endl;
    cout << setw(20) << left << col_1 << setw(1) << "|" << setw(23) << right << col_2 << endl;
    //cout << setw(23) << right << col_2 << endl;
    cout << setfill('-') << setw(44) << "" <<  endl;
    cout << setfill(' ');
    for(int i = 0; i < strings.size(); i++)
    {
        cout << setw(20) << left << strings[i] <<
        setw(1) << "|" <<
        setw(23) << right << ints[i] << endl;
        
    }
    cout << endl;
}

void output_histo(vector<string> const strings, vector<int> const &ints)
{
    for(int i = 0; i < strings.size(); i++)
    {
        
        cout << setw(20) << right << strings[i] <<
        setw(1) << " " <<
        setfill('*') << setw(ints[i]) << left << "" << endl;

        cout << setfill(' ');
        
    }
} 


int main() {
    string title, col_1, col_2;
    string data;
    vector<string> strings;
    vector<int> ints;
    cout << "Enter a title for the data:" << endl;
    getline(cin , title);
    cout << "You entered: " << title << endl << endl;

    cout << "Enter the column 1 header:" << endl;
    getline(cin , col_1);
    cout << "You entered: " << col_1 << endl << endl;
    
    cout << "Enter the column 2 header:" << endl;
    getline(cin , col_2);
    cout << "You entered: " << col_2 << endl << endl;

    while(true)
    {
        cout << "Enter a data point (-1 to stop input):" << endl;
        getline(cin, data);
        if(data == "q")
        {
            break;
        }
        if(!valid_input(data))
        {
            cout << endl;
            continue;
        }

        insert_data(data, strings, ints);


    }
    
    output_table(title, col_1, col_2, strings, ints);

    output_histo(strings, ints);
   /* Type code here. */
   
   return 0;
}