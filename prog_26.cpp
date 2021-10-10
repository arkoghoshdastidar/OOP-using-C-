#include<iostream>
#include<iomanip>
using namespace std;

int add(int , int); // case 1
float add(float, float); //case 2

int main(void)
{
   int num1 = 2, num2 = 5; 
   cout<<"2+5 = "<<add(num1,num2)<<endl; 
   float num3 = 2.50, num4 = 5.67;
   cout<<"2.50+5.67 = "<<add(num3,num4)<<endl; 
   return(0);
}

int add(int a,int b){
    return(a+b);
}

float add(float a,float b){
    return(a+b);
}