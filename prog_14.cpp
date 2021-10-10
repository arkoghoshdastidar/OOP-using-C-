#include<iostream>
#include<iomanip>
using namespace std;

union currency{

    int rupee;
    float dollar;
    float pound;
};

typedef union currency standard_currency;

int main(void)
{
   standard_currency india;
   india.rupee;
   standard_currency usa;
   usa.dollar;
   standard_currency europe;
   europe.pound;
   cout<<setw(5)<<(india.rupee=10)<<endl;
   cout<<setw(5)<<(usa.dollar=4.54)<<endl;
   cout<<setw(5)<<(europe.pound=1.28)<<endl;
   return(0);
}