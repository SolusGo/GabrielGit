#ifndef BANKACCOUNTH
#define BANKACCOUNTH

#include <string>
using namespace std;

class BankAccount {
   public:
      // TODO: Declare public member functions
        BankAccount(string newName, double amt1, double amt2);
        void SetName(string newName);
        void SetChecking(double amt);
        void SetSavings(double amt);

        string GetName();
        double GetChecking();
        double GetSavings();

        void DepositChecking(double amt);
        void DepositSavings(double amt);

        void WithdrawChecking(double amt);
        void WithdrawSavings(double amt);

        void TransferToSavings(double amt); 
   private:
      // TODO: Declare private data members
      string name;
      double savings;
      double checking;
};

#endif