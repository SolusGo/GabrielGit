#include "OfferedCourse.h"

// TODO: Define mutator functions -
//      SetInstructorName(), SetTerm(), SetClassTime()


// TODO: Define accessor functions -
//      GetInstructorName(), GetTerm(), GetClassTime()


void OfferedCourse::SetInstructorName(string name)
{
    this->instructorName = name;
}

void OfferedCourse::SetTerm(string term)
{
    this->term = term;
}
void OfferedCourse::SetClassTime(string name)
{
    this->classTime = name;
}

string OfferedCourse::GetInstructorName()
{
    return this->instructorName;
}

string OfferedCourse::GetTerm()
{
    return this->term;
}

string OfferedCourse::GetClassTime()
{
    return this->classTime;
}