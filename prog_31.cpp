#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

float area(int a,int b,int c)
{
    float s = (a+b+c)/2;
    return(sqrt(s*(s-a)*(s-b)*(s-c)));
}

float area(int r)
{
    return(3.14*r*r);
}

int main(void)
{

   cout<<"Area of circle of radius 3cm = "<<area(3)<<" cm^2"<<endl; 
   cout<<"Area of triangle of sides 3,4,5 = "<<area(3,4,5)<<" cm^2"<<endl;
   return(0);
}