#include<iostream>
#include<string>
using namespace std;
class Investment
{
    protected:
        float initialValue,currentValue,profit,profitPercentage;
    public:
        Investment(float initialValue,float currentValue);
        void display(void);
};
Investment::Investment(float initialValue,float currentValue)
{
    this->initialValue=initialValue;
    this->currentValue=currentValue;
    profit=currentValue-initialValue;
    profitPercentage=(profit/initialValue)*100;
}
void Investment::display(void)
{
    cout<<"Initial Value : "<<initialValue<<endl<<"Current Value : "<<currentValue<<endl<<"Profit : "<<profit<<endl<<"Profit Percentage : "<<profitPercentage<<endl;
}

class House
{
    protected:
        string address;
        float squareFeet;
    public:
        House(string address,float squareFeet);
        void display(void);
};
House::House(string address,float squareFeet)
{
    this->address=address;
    this->squareFeet=squareFeet;
}
void House::display(void)
{
    cout<<"House Address : "<<address<<endl<<"Square Feets : "<<squareFeet<<endl;
}

class HouseThatIsAnInvestment:public House,public Investment
{
    public:
        HouseThatIsAnInvestment(float initialValue,float currentValue,string address,float squareFeet):House(address,squareFeet),Investment(initialValue,currentValue){}
        void display(void);
};
void HouseThatIsAnInvestment::display(void)
{
    Investment::display();
    House::display();
}
int main(void)
{
    HouseThatIsAnInvestment H1(1200000,1500000,"B/24-Netajee Nagar Kantatoli Colony,Ranchi,JH",1500);
    H1.display();
    return(0);
}