#include<iostream>
#include<iomanip>
using namespace std;

class BankAccount
{
    char name[50];
    int accountNumber;
    char type[50];
    float balance;
    public:
        void set(void);
        void deposit(float money){
            balance += money;
        }
        void withdraw(float money){
            if(money<=balance){
                balance -= money;
                cout << "Account Balance : " << balance << endl;
            }
            else{
                cout << "Balance Insufficient"<<endl;
                cout << "Account Balance : " << balance << endl;
            }
        }
        void display(void){
            cout << "Name : "<<name<<" Balance : "<<balance<<endl;
        }
};

void BankAccount :: set(void){
    cout << "ACCOUNT NUMBER : ";
    cin >> accountNumber;
    cout << endl;
    cout << "NAME : ";
    cin >> name;
    cout <<endl;
    cout << "TYPE OF ACCOUNT : ";
    cin >> type;
    cout << endl;
    cout << "BALANCE : ";
    cin >> balance;
    cout <<endl;
}

int main(void)
{
   BankAccount rick;
   rick.set();
   rick.deposit(10000000);
   rick.withdraw(20000);
   rick.display();
   return(0);
}