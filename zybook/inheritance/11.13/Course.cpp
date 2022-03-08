#include "Course.h"

	


string Course::GetCourseNumber()
{
    return this->courseNumber;
}

string Course::GetCourseTitle()
{
    return this->courseTitle;
}

void Course::SetCourseNumber(string number)
{
    this->courseNumber = number;
}

void Course::SetCourseTitle(string title)
{
    this->courseTitle = title;
}


void Course::PrintInfo()
{
    cout << "Course Information: " << endl;
    cout << "   Course Number: " << this->courseNumber << endl;
    cout << "   Course Title: " << this->courseTitle << endl;

    // TODO: Define mutator functions - 
	//       SetCourseNumber(), SetCourseTitle()

	// TODO: Define accessor functions - 
	//       GetCourseNumber(), GetCourseTitle()


	// TODO: Define PrintInfo()s
}