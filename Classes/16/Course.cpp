#include <iostream>
#include "Course.h"
using namespace std;

Student Course::FindStudentHighestGpa() {
   int max;
   
   if(roster.empty())
   {
       max = 0;
   }
   else
   {
       max = 0;
   }
   for(int i =0; i < roster.size(); i++)
   {
       if(roster[max].GetGPA() < roster[i].GetGPA())
       {
           max = i;
       }
   }

   return roster[max];
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}