#include "Artist.h"
#include <iostream>
#include <string>


// TODO: Define default constructor
Artist::Artist()
{
    artistName = "None";
    birthYear = 0;
    deathYear = 0;
}
// TODO: Define second constructor to initialize
//       private fields (artistName, birthYear, deathYear)
Artist::Artist(string artistName, int birthYear, int deathYear)
{
    this->artistName = artistName;
    this->birthYear = birthYear;
    this->deathYear = deathYear;
}
// TODO: Define get functions: GetName(), GetBirthYear(), GetDeathYear()
string Artist::GetName() const
{
    return artistName;
}

int Artist::GetBirthYear() const
{
    return birthYear;
} 

int Artist::GetDeathYear() const
{
    return deathYear;
}

void Artist::PrintInfo() const
{
    cout << artistName;
    
    if(deathYear > -1)
    {
        cout << " (" ;
        cout << birthYear << "-";
        cout << deathYear << ")" << endl;
    }
    else
    {
        cout << ", born " << birthYear << endl;
    }
}

// TODO: Define PrintInfo() function
//      If deathYear is entered as -1, only print birthYear