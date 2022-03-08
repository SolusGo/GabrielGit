#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
	// TODO: Declare private data members - instructorName, term, classTime


	// TODO: Declare mutator functions -
	//      SetInstructorName(), SetTerm(), SetClassTime()


	// TODO: Declare accessor functions -
	//      GetInstructorName(), GetTerm(), GetClassTime()

    public:
        void SetInstructorName(string name);
        void SetTerm(string term);
        void SetClassTime(string name);

        string GetInstructorName();
        string GetTerm();
        string GetClassTime();


    private:
        string instructorName, term, classTime;
};

#endif