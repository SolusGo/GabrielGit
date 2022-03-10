#include <iostream>
using namespace std;

int main() {
   string userChord;
   
   cin >> userChord;

   if(userChord == "G")
   {
      cout << "e|-0-" << endl;
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

   return 0;
}