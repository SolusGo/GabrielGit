#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
	// TODO: Declare private data members - courseNumber, courseTitle

    
	// TODO: Define mutator functions - 
	//       SetCourseNumber(), SetCourseTitle()


	// TODO: Define accessor functions - 
	//       GetCourseNumber(), GetCourseTitle()


	// TODO: Define PrintInfo()

    public:
        void SetCourseNumber(string number);
        void SetCourseTitle(string title);

        string GetCourseNumber();
        string GetCourseTitle();

        void PrintInfo();

    private:
        string courseNumber, courseTitle;

};

#endif
