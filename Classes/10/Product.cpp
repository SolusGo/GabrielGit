#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

/* Type your code here */

Product::Product(string code, double price, int count)
{
    this->code = code;
    this->price = price;
    this->count = count;
}


void Product::SetCode(string i)
{
    this->code = i;
}

void Product::SetPrice(double i)
{
    this->price = i;
}

void Product::SetCount(int i)
{
    this->count = i;
}

string Product::GetCode()
{
    return code;
}

double Product::GetPrice()
{
    return price;
}

int Product::GetCount()
{
    return count;
}


void Product::AddInventory(int i)
{
    count += i;
}

void Product::SellInventory(int i)
{
    count -= i;
    
}