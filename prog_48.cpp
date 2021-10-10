#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
   char name[100];
   float units,charge = 50.00; 
   cout << "Enter name and total units comsumed : "<<endl;
   cin >> name >> units;
    if(units>=0 && units<=100)
    {
        charge += 0.6*units;
    }
    else if(units >100 && units <=300)
    {
        charge += 0.6*100 + 0.8*(units-100);
    }
    else
    {
        charge += 0.6*100 + 0.8*200 +(units-300)*0.9;
    }
    if(charge > 300)
    {
        charge += 0.15*charge;
    }
    else
    charge = charge;
    cout << "NAME : "<<name<<" CHARGE : "<<setw(5)<<charge<<endl;
   return(0);
}