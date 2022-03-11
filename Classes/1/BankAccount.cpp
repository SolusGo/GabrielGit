#include <iostream>
#include "BankAccount.h"
using namespace std;

// TODO: Define public member functions


BankAccount::BankAccount(string newName, double amt1, double amt2)
{
    name = newName;
    savings = amt2;
    checking = amt1;
}

void BankAccount::SetName(string newName)
{
    name = newName;
}

void BankAccount::SetChecking(double amt)
{
    checking = amt;
}

void BankAccount::SetSavings(double amt)
{
    savings = amt;
}

string BankAccount::GetName() {return name;}


double BankAccount::GetChecking() {return checking;}

double BankAccount::GetSavings() {return savings;}

void BankAccount::DepositChecking(double amt)
{
    if(amt >= 0)
    {

     checking += amt;

    }
}

void BankAccount::DepositSavings(double amt)
{
    if(amt >= 0)
    {

     savings += amt;

    }

}

void BankAccount::WithdrawChecking(double amt)
{
    if(checking - amt >= 0 && amt >= 0)
    {
        checking -= amt;
    }
}

void BankAccount::WithdrawSavings(double amt)
{
    if(savings - amt >= 0 && amt >= 0)
    {
        savings -= amt;
    }
}

void BankAccount::TransferToSavings(double amt)
{
    if(checking - amt >= 0 && amt >= 0)
    {
        savings += amt;
        checking -= amt;
    }
}