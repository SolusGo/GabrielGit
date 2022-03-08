#include <iostream>
using namespace std;

#include "ItemToPurchase.h"
#include "ShoppingCart.h"

void PrintMenu()
{
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
}

void ExecuteMenu(char choice,  ShoppingCart & cart)
{
    
    ItemToPurchase item;
    string name, desc;
    int price, quant;
    ItemToPurchase newItem;
    switch(choice)
    {
        
        case 'a':
            cout << "ADD ITEM TO CART" << endl;
            cin.ignore();

            cout << "Enter the item name:" << endl;
            getline(cin, name);

            cout << "Enter the item description:" << endl;
            getline(cin, desc);

            cout << "Enter the item price:" << endl;
            cin >> price;

            cout << "Enter the item quantity::" << endl;
            cin >> quant;
            cart.AddItem(ItemToPurchase(name, desc, price, quant));
            cout << endl;
            break;
        case 'd':
            cout << "ADD ITEM TO CART" << endl;
            cout << "Enter name of item to remove:" << endl;
            cin.ignore();
            getline(cin, name);
            cart.RemoveItem(name);
            cout << endl;
            break;
        case 'c':
            cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter the item name:" << endl;
            cin.ignore();
            getline(cin, name);
            cout << "Enter the new quantity:" << endl;
            cin >> quant;
            newItem.SetName(name);
            newItem.SetQuantity(quant);
            cart.ModifyItem(newItem);
            cout << endl;


            break;
        case 'i':
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            cart.PrintDescriptions();
            cout << endl;
            break;
        case 'o':
            cout << "OUTPUT SHOPPING CART" << endl;
            cart.PrintTotal();
            cout << endl;
            break;
        
    }
}

int main() {
   
   /* Type your code here */
    ShoppingCart cart;
    string name, date;
    char option = 'z';
    cout << "Enter customer's name:" << endl;
    getline(cin, name);
    cout << "Enter today's date:" << endl;
   
    getline(cin, date);

    cout << "Customer name: " << name << endl;
    cout << "Today's date: " << date << endl;
    cart = ShoppingCart(name, date);
    cout << endl;
    while(option != 'q')
    {
        PrintMenu();
        cout << endl;
        cout << "Choose an option:" << endl;
        cin >> option;
        ExecuteMenu(option, cart);
    }
}