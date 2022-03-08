
using namespace std;

#include "ItemToPurchase.h"


ItemToPurchase::ItemToPurchase()
{
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
    itemDescription = "none";
}

ItemToPurchase::ItemToPurchase(string name, string desc, int price, int quant)
{
    itemName = name;
    itemPrice = price;
    itemQuantity = quant;
    itemDescription = desc;

}

void ItemToPurchase::SetName(string name)
{
    this->itemName = name;
}

void ItemToPurchase::SetPrice(int price)
{
    this->itemPrice = price;
}

void ItemToPurchase::SetQuantity(int quantity)
{
    this->itemQuantity = quantity;
}

void ItemToPurchase::SetDescription(string desc)
{
    this->itemDescription = desc;
}

string ItemToPurchase::GetName()
{
    return this->itemName;
}

string ItemToPurchase::GetDescription()
{
    return this->itemDescription;
}

int ItemToPurchase::GetPrice()
{
    return this->itemPrice;
}

int ItemToPurchase::GetQuantity()
{
    return this->itemQuantity;
}


void ItemToPurchase::PrintItemCost()
{
    int total_price = itemQuantity*itemPrice;
    cout << itemName << " " << itemQuantity << " @ $" << 
    itemPrice << " = $"<< 
    total_price <<endl;
}

void ItemToPurchase::PrintItemDescription()
{
    cout << itemName << ": " << itemDescription << endl;
}


/* Type your code here */