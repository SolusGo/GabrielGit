#include <iostream>
#include "ContactNode.h"
using namespace std;
int main() {

   /* Type your code here. */
    ContactNode * head = nullptr, * current;
    string name, num; 
    for(int i = 0; i < 3; i++)
    {
        cout << "Person " << i + 1 << endl;
        cout << "Enter name:" << endl;
        getline(cin, name);
        cout << "Enter phone number:" << endl;
        getline(cin, num);

        if(head == nullptr)
        {
            head = new ContactNode(name, num);
            current = head;
        }
        else
        {
            ContactNode * temp = new ContactNode(name, num);
            current->InsertAfter(temp);
            current = temp;
        }

        cout << "You entered: " << name << ", " << num << endl;
        cout << endl;
    }
    current = head;
    cout << "CONTACT LIST" << endl;
    while(current->GetNext() != nullptr)
    {
        current->PrintContactNode();
        current = current->GetNext();
        cout << endl;
    }
    current->PrintContactNode();
    
   return 0;
}
