#include <iostream>
#include "Course.h"
using namespace std;

vector<Student> Course::GetDeansList() {
	/* Type your code here */
	vector<Student> dean;
    cout << "Dean's list:" << endl;
    for(int i = 0; i < roster.size(); i++)
    {
        if(roster[i].GetGPA() >= 3.5)
        {
            dean.push_back(roster[i]);
        }
    }
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}