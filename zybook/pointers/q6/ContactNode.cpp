#include "ContactNode.h"



ContactNode::ContactNode(string contactName, string contactPhoneNum)
{
    
    this->contactName = contactName;
    this->contactPhoneNum = contactPhoneNum;
    nextNodePtr = nullptr;
}


void ContactNode::InsertAfter(ContactNode * node)
{
    ContactNode * temp = nextNodePtr;
    nextNodePtr = node;
    node->nextNodePtr = temp;
}

ContactNode * ContactNode::GetNext()
{
    return nextNodePtr;
}

string ContactNode::GetName()
{
    return this->contactName;
}


string ContactNode::GetPhoneNumber()
{
    return this->contactPhoneNum;
}

void ContactNode::PrintContactNode()
{
    cout << "Name: " << contactName << endl;
    cout << "Phone number: " << contactPhoneNum << endl;
}