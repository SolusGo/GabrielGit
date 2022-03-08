#include <iostream>
// FIXME include vector library
#include <vector>
using namespace std;

int main() {

   char option = 'x';
   vector<int> rating(5), players(5);
   int jers_num, inp_rating, index;
   for(int i = 0; i < 5; i++)
   {
      cout << "Enter player " << i + 1 << "'s jersey number:\n";
      cin >> players[i];
      cout << "Enter player " << i + 1 << "'s rating:\n";
      cin >> rating[i];
      
      cout << endl;
   }
   
   cout << "ROSTER" << endl;
   for(unsigned int i = 0; i < players.size(); i++)
            {
               
               
                  cout << "Player " << i + 1 << " -- " << "Jersey number: " << players[i] << ", Rating: " << rating[i]
                  << endl;
               
            }
   cout << endl;
   while(option != 'q')
   {
      cout << "MENU"<< endl;
      cout << "a - Add player"<< endl;
      cout << "d - Remove player"<< endl;
      cout << "u - Update player rating"<< endl;
      cout << "r - Output players above a rating"<< endl;
      cout << "o - Output roster"<< endl;
      cout << "q - Quit"<< endl;
      cout << endl;
      cout << "Choose an option:"<< endl;
      
      cin >> option;
      switch(option)
      {
         case 'a':
            cout << "Enter a new player's jersey number:" << endl;
            cin >> jers_num;
            players.push_back(jers_num);
            cout << "Enter the player's rating:" << endl;
            cin >> inp_rating; 
            rating.push_back(inp_rating);
            break;
         case 'd':
            cout << "Enter a jersey number:" << endl;
            cin >> jers_num;
            
            for(unsigned int i = 0; i < players.size(); i++)
            {
               if(jers_num == players[i])
               {
                  players.erase(players.begin() + i);
                  break;
               }
            }
            break;
         case 'u':
             index = -1;
            cout << "Enter a jersey number:" << endl;
            cin >> jers_num;
            for(unsigned int i = 0; i < players.size(); i ++)
            {
               if(jers_num == players[i])
               {
                  index = i;
                  break;
                  
               }
            }
            
            cout << "Enter a new rating for player:\n";
            cin >> rating[index];
            
            break;
            
         case 'r':
            cout << "Enter a rating:" << endl;
            cin >> inp_rating;
            cout << "ABOVE " << inp_rating << endl;
            for(unsigned int i = 0; i < players.size(); i++)
            {
               
               if (inp_rating < rating[i])
               {
                  cout << "Player " << i + 1 << " -- " << "Jersey number: " << players[i] << ", Rating: " << rating[i]
                  << endl;
               }
            }
            break;
         case 'o':
            cout << "ROSTER" << endl;
            for(unsigned int i = 0; i < players.size(); i++)
            {
               
               
                  cout << "Player " << i + 1 << " -- " << "Jersey number: " << players[i] << ", Rating: " << rating[i]
                  << endl;
               
            }
            cout << endl;
            break;
         
      }
      
      
   }
   
   

   return 0;
}