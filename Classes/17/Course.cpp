#include "Course.h"
#include "Student.h"

using namespace std;

// TODO: Output each student in the course roster, and then the total size of the course
/* Type your code here */

void Course::PrintRoster()
{
    for(int i = 0; i < roster.size(); i++)
    {
        cout << roster[i].GetFirst() << " " << roster[i].GetLast() << " (GPA: " << roster[i].GetGPA()
        << ")" << endl;
    }

    cout << "Students: " << roster.size() << endl;
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}