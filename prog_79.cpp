#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

// Exercise 8.1 and 8.2 :-

class account
{
protected:
    char firstName[15];
    char lastName[15];
    char accountType[8];
    char accountNumber[11];
    float balance;

public:
    account(void);
    void displayBalance(void);
    void deposit(float);
    void withdraw(float);
};
account ::account(void)
{
    cout << "Enter first name : ";
    cin >> firstName;
    cout << endl;
    cout << "Enter last name : ";
    cin >> lastName;
    cout << endl;
    cout << "Enter the account type (saving/current) : ";
    cin >> accountType;
    cout << endl;
    cout << "Enter first deposition amount : ";
    cin >> balance;
    cout << endl;
    cout << "Generate account number : ";
    cin >> accountNumber;
    cout << endl
         << accountType << " account with account number " << accountNumber << " and balance " << balance << " created successfully." << endl;
}
void account ::displayBalance(void)
{
    cout << "Account number : " << accountNumber << endl
         << "Balance amount : " << balance << endl;
}
void account ::deposit(float depoAmmount)
{
    balance += depoAmmount;
    displayBalance();
    return;
}
void account ::withdraw(float withAmmount)
{
    if (withAmmount <= balance)
        balance -= withAmmount;
    else
        cout << "Insufficient balance " << endl;
    cout << "Account number : " << accountNumber << endl
         << "Balance amount : " << balance << endl;
    return;
}

class saving_account : public account
{
public:
    saving_account() : account()
    {
        cout << "Note : Cheque book facility is not available for saving account and a compund interest of 1.5% will be deposited on every new year." << endl;
    }
    void deposit_interest(void)
    {
        balance *= 1.015;
    }
};

class current_account : public account
{
public:
    current_account() : account()
    {

        cout << "Note : If your balance ammount is less than 500 rupee then an interest of 3% will be charged on your current account on first sunday of every month." << endl; //
    }
    void charge_interest(void)
    {
        if(balance<500)
            balance *=0.97;
        else
            return;
        return; 
    }
};

int main(void)
{
    saving_account rick;
    current_account arko;
    rick.displayBalance();
    rick.deposit(120);
    rick.withdraw(20);
    rick.deposit_interest();
    rick.displayBalance();
    arko.displayBalance();
    arko.charge_interest();
    arko.displayBalance();
    current_account ghosh;
    ghosh.displayBalance();
    ghosh.charge_interest();
    ghosh.displayBalance();
    return (0);
}