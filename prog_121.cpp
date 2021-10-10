#include<iostream>
#include<iomanip>
#include<map>
using namespace std;

int main(void)
{
    string model;
    int model_sold,flag=1;
    map<string,int> car_sale;
    do
    {
        cout<<"Enter the model number of car : ";
        cin>>model;
        cout<<"Enter the number of models sold : ";
        cin>>model_sold;
        car_sale.insert(pair<string,int>(model,model_sold));
        cout<<"Press 0 to exit the loop : ";
        cin>>flag;
    }while(flag);
    map<string,int>::iterator iter = car_sale.begin();
    cout<<endl;
    while(iter!=car_sale.end())
    {
        cout<<iter->second<<" number of "<<iter->first<<" sold."<<endl;
        iter++;
    }
    return(0);
}