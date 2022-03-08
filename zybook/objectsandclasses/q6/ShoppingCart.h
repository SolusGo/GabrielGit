#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <string>
#include <iostream>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;


class ShoppingCart
{
    public:
        ShoppingCart();
        ShoppingCart(string name, string date);

        string GetCustomerName();
        string GetDate();
        int GetNumItemsInCart();
        int GetCostOfCart();

        void AddItem(ItemToPurchase item);
        void RemoveItem(string name);
        void ModifyItem(ItemToPurchase item);

        void PrintTotal();
        void PrintDescriptions();

    private:
        string customerName;
        string currentDate;
        vector <ItemToPurchase> cartItems;

};

#endif