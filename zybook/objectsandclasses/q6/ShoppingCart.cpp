
using namespace std;

#include "ShoppingCart.h"



ShoppingCart::ShoppingCart()
{
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string name, string date)
{
    customerName = name;
    currentDate = date;
}

string ShoppingCart::GetCustomerName()
{
    return customerName;
}

string ShoppingCart::GetDate()
{
    return currentDate;
}

int ShoppingCart::GetNumItemsInCart()
{
    return cartItems.size();
}

int ShoppingCart::GetCostOfCart()
{
    int total_price = 0;

    for(unsigned int i = 0; i < cartItems.size(); i++)
    {
        total_price += cartItems[i].GetPrice() * cartItems[i].GetQuantity();
    }

    return total_price;
}

void ShoppingCart::AddItem(ItemToPurchase item)
{
    cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string name)
{
    bool has_removed = false;

    for(unsigned int i = 0; i < cartItems.size(); i++)
    {
        if(name == cartItems[i].GetName())
        {
            has_removed = true;
            cartItems.erase(cartItems.begin() + i);
            break;
        }
    }

    if (!has_removed)
    {
        cout << "Item not found in cart. Nothing removed." << endl;
    }

}

void ShoppingCart::ModifyItem(ItemToPurchase item)
{
    bool is_modified = false;

    for(unsigned int i = 0; i < cartItems.size(); i++)
    {
        if(item.GetName() == cartItems[i].GetName())
        {
            is_modified = true;
            if(item.GetPrice() > 0)
            {
                cartItems.at(i).SetPrice(item.GetPrice());
            }

            if(item.GetQuantity() > 0)
            {
                cartItems.at(i).SetQuantity(item.GetQuantity());
            }

            break;
        }
    }

    if (!is_modified)
    {
        cout << "Item not found in cart. Nothing modified." << endl;
    }

}

void ShoppingCart::PrintTotal()
{
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << "Number of Items: " << GetNumItemsInCart();
    cout << endl;
    
    for(unsigned int i = 0; i < cartItems.size(); i++)
    {
        cartItems[i].PrintItemCost();
    }

    cout << endl;
    cout << "Total : $" << GetCostOfCart() << endl;
}

void ShoppingCart::PrintDescriptions()
{
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << endl;
    cout << "Item Descriptions" << endl;
    
    for(unsigned int i = 0; i < cartItems.size(); i++)
    {
        cartItems[i].PrintItemDescription();
    }

}