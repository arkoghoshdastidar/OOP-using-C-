#include<iostream>
#include<iomanip>
using namespace std;

float pow(int,int);
float pow(float,int);

int main(void)
{
   int num,pow_er;
   float num_2;
   cout<<"Enter the (int)number and its exponent value : "<<endl;
   cin>>num>>pow_er;
   cout<<num<<"^"<<pow_er<<" = "<<pow(num,pow_er)<<endl; 
   cout<<"Enter the (float)number and its exponent value : "<<endl;
   cin>>num_2>>pow_er;
   cout<<num_2<<"^"<<pow_er<<" = "<<pow(num_2,pow_er)<<endl; 
   return(0);
}

float pow(int num, int power)
{
    float x = 1;
    for(int i = 1;i<=power;i++)
    {
        x=x*num;
    }
    return(x);
}

float pow(float num, int power)
{
    float x = 1;
    for(int i = 1;i<=power;i++)
    {
        x=x*num;
    }
    return(x);
}