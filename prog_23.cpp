#include<iostream>
#include<iomanip>
using namespace std;
// returning reference from a function

int& max(int &a,int &b);

int main(void)
{
    int greater_2,num1,num2;
    cout<<"Enter the values of num1 and num2"<<endl;
    cin>>num1>>num2;
    greater_2 = max(num1,num2);
    cout<<greater_2<<" is greater than the other value\n";
    return(0);
}

int& max(int &a,int &b)
{
    if(a>b)
    return a;
    else 
    return b;
}