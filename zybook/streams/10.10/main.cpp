#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int DateParser(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
	
	istringstream inSS("");
    ostringstream oSS;
	string current_line, strmonth, strday, stryr;
	getline(cin , current_line);
	int day, month;
	while(current_line != "-1")
	{
	   inSS.clear();
	   inSS.str(current_line);
	   
	   inSS >> strmonth;
	   
	   month = DateParser(strmonth);
	   
	   if(month == 0 || inSS.bad())
	   {
	      getline(cin, current_line);
	      continue;
	   }
	   
	   inSS >> strday;
	   if(strday[strday.length() - 1] != ',' || inSS.bad())
	   {
	      getline(cin, current_line);
	      continue;
	   }
	   strday.erase( strday.begin() + (strday.length() - 1));
	   day = stoi(strday);
	   
	   inSS >> stryr;
	   
	   if(inSS.bad())
	   {
	      getline(cin, current_line);
	      continue;
	   }
	   oSS << month << "/" << day << "/" << stryr << endl;
       
	   getline(cin, current_line);
    }
    string str = oSS.str();
    cout << oSS.str() << endl;
}
