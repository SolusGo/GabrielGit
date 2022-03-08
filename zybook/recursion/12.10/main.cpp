#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Write method to create and output all permutations of the list of names.
void PrintAllPermutations(const vector<string> &permList, const vector<string> &nameList) {

   vector<string> temp;
   vector<string> new_names = nameList;
   string name;
   if(permList.size() == 0)
   {
      for(int i = 0; i < nameList.size() - 1; i++)
      {
         cout << nameList[i] << ", ";

      }
      
      cout << nameList[nameList.size() - 1] << endl;
   }
   else
   {
      for(int i = 0; i < permList.size(); i++)
      {
         

         temp = permList;
         new_names = nameList;
         name = permList[i];
         new_names.push_back(name);
         temp.erase(temp.begin() + i);
         PrintAllPermutations(temp, new_names);

      }
   }
   


   
}

int main() {
   vector<string> nameList;
   vector<string> permList;
   string name;

   // TODO: Read in a list of names; stop when -1 is read. Then call recursive method.
   while(name != "-1")
   {
      cin >> name;
      if(name != "-1")
      {
         permList.push_back(name);
      }   
   }

   PrintAllPermutations(permList, nameList);
   return 0;
}