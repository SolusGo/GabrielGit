#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
#include <iostream>
using namespace std;


class ItemToPurchase{
    public:
        ItemToPurchase();
        ItemToPurchase(string name, string desc, int price, int quant);
        void SetName(string name);
        void SetPrice(int price);
        void SetQuantity(int quantity);
        void SetDescription(string desc);

        string GetName();
        int GetPrice();
        int GetQuantity();
        string GetDescription();
        
        void PrintItemCost();
        void PrintItemDescription();
    private:
        string itemName;
        string itemDescription;
        int itemPrice;
        int itemQuantity;
};

#endif