#include <iostream>
#include <string>
using namespace std;

/*
{
   cout << "e|-0-" << endl;
      cout << "B|-1-" << endl;
      cout << "G|-0-" << endl;
      cout << "D|-2-" << endl;
      cout << "A|-3-" << endl;
      cout << "E|---" << endl;

*/
string guitar_chords(char const cords[], int size)
{
    string r1, r2, r3 , r4, r5, r6;
    r1 = "e|";
    r2 = "B|";
    r3 = "G|";
    r4 = "D|";
    r5 = "A|";
    r6 = "E|";
    
    for(int i = 0; i < size; i++)
    {
        switch(cords[i])
        {
            case 'G':
                r1 += "-3";
                r2 += "-0";
                r3 += "-0";
                r4 += "-0";
                r5 += "-2";
                r6 += "-3";
                break;
            case 'D':
                r1 += "-2";
                r2 += "-3";
                r3 += "-2";
                r4 += "-0";
                r5 += "--";
                r6 += "--";
                break;
            case 'C':
                r1 += "-0";
                r2 += "-1";
                r3 += "-0";
                r4 += "-2";
                r5 += "-3";
                r6 += "--";
                break;
        }
    }
    r1 += "-\n";
    r2 += "-\n";
    r3 += "-\n";
    r4 += "-\n";
    r5 += "-\n";
    r6 += "-\n";

    return r1 + r2 + r3+ r4 + r5 + r6;

}

int main() {

   /* Type your code here. */
    int size;
    cin >> size;

    char cords[size];

    for(int i = 0; i < size; i++)
    {
        cin >> cords[i];
    }

    cout << guitar_chords(cords,size);
   return 0;
}


/*

if(userChord == "G")
   {
      cout << "e|-3-" << endl;
      cout << "B|-0-" << endl;
      cout << "G|-0-" << endl;
      cout << "D|-0-" << endl;
      cout << "A|-2-" << endl;
      cout << "E|-3-" << endl;
      
   }
   else if(userChord == "D")
   {
      cout << "e|-2-" << endl;
      cout << "B|-3-" << endl;
      cout << "G|-2-" << endl;
      cout << "D|-0-" << endl;
      cout << "A|---" << endl;
      cout << "E|---" << endl;
   }
   else if(userChord == "C")
   {
      cout << "e|-0-" << endl;
      cout << "B|-1-" << endl;
      cout << "G|-0-" << endl;
      cout << "D|-2-" << endl;
      cout << "A|-3-" << endl;
      cout << "E|---" << endl;
   }
   else
   {
      cout << userChord << " is not a supported chord." << endl;
   }




*/