#ifndef CONTACTNODEH
#define CONTACTNODEH
#include <string>
#include <iostream>
using namespace std;

class ContactNode
{
    public:

        ContactNode(string contactName, string contactPhoneNum);
        void InsertAfter(ContactNode * node);
        string GetName();
        string GetPhoneNumber();
        ContactNode * GetNext();
        void PrintContactNode();

    private:
        string contactName;
        string contactPhoneNum;
        ContactNode* nextNodePtr;

};


#endif