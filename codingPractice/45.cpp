#include <iostream>
#include <string>
using namespace std;

string DigitToWord(int digitIn) {

   string number;

   switch(digitIn)
   {
        case 0:
                number = "zero";
                break;
        case 1:
                number = "one";
                break;
        case 2:
                number = "two";
                break;
        case 3:
                number = "three";
                break;
        case 9:
                number = "nine";
                break;

        case 4:
                number = "four";
                break;

        case 5:
                number = "five";
                break;
        case 6:
                number = "six";
                break;
        case 7:
                number = "seven";
                break;

        case 8:
                number = "eight";
                break;
        default:
            number = "error";
            break;
   }

   return number;

}

string TensDigitToWord(int digitIn) {
 
   // FINISH
   string number;

   switch(digitIn)
   {
        case 2:
            number = "twenty";
            break;
        case 3:
            number = "thirty";
            break;
        
        case 4:
            number = "forty";
            break;
        case 5:
            number ="fifty";
            break;
        case 6:
            number = "sixty";
            break;
        case 7:
            number = "seventy";
            break;
        case 8:
            number = "eighty";
            break;
        case 9:
            number = "ninety";
            break;
        default:
            number = "error";
            break; 

   }

   return number;

}

string TwoDigitNumToWords(int numIn) {

   // FINISH
   string number;

    if(numIn < 20 || numIn > 99)
    {
        number = "error\n";
    }
    else
    {
        number = TensDigitToWord(numIn / 10) + " " + DigitToWord(numIn % 10);
        number += "\n";
    }

    return number;

}


int main() {

   // FINISH
   int number;
   cin >> number;

   cout << TwoDigitNumToWords(number);
   
   return 0;

}