#include<iostream>
#include<iomanip>
using namespace std;

// dyanamic initialization of objects

class fixed_deposit{
    double principal;
    int years;
    float rate;
    double value;
    public:
        fixed_deposit(void){

        }
        fixed_deposit(double P,int Y,double R);
        fixed_deposit(double P,int Y,int R);
        void display(void){
            cout << "Value = "<<value<<" for principal = "<<principal<<" years = "<<years<<" at a rate of "<<rate<<endl;
        }
};  

fixed_deposit :: fixed_deposit(double P,int Y,double R){
    principal = P;
    years = Y;
    rate = R;
    value = principal;
    for(int i = 1;i<=years;i++)
        value*=(1+rate);
}

fixed_deposit :: fixed_deposit(double P,int Y,int R){
    principal = P;
    years = Y;
    rate = float(R)/100;
    value = principal;
    for(int i = 1;i<=years;i++)
        value*=(1+rate);
}

int main(void)
{
    fixed_deposit fd1,fd2;
    fd1 = fixed_deposit(100,5,10);
    fd2 = fixed_deposit(100,5,0.10);
    fd1.display();
    fd2.display();
    return(0);
}