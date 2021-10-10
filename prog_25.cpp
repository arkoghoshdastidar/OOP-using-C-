#include<iostream>
#include<iomanip>
using namespace std;

int factorial(int num)
{
    if(num == 0)
    return 1;
    return num*factorial(num-1);
}

int main(void)
{
   int num;
   cout<<"Enter a number : ";
   cin>>num;
   cout<<num<<"! = "<<factorial(num); 
   return(0);
}