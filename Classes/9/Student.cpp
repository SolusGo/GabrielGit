// Simple class to hold student information
#include "Student.h"

#include <iostream>
#include <string>

using namespace std;
 
Student::Student() {
   //FIXME: complete the constructor
   name = "Louie";
   gpa = 1.0;
}

void Student::SetName(string n) {
	//FIXME: complete SetName function
    name = n;
}

void  Student::SetGPA(double n)
{
     Student::gpa = n;
}

string Student::GetName()
{
    return name;
} 

double Student::GetGPA()
{
    return gpa;
}


// FIXME: Add 3 more functions