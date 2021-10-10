#include<iostream>
#include<iomanip>
using namespace std;
void swap(int &x,int &y);
int main(void)
{
    int x,y;
    cout <<"Enter two numbers x and y respectively"<<endl;
    cin >>x>>y;
    cout <<"x= "<<x<<endl<<"y= "<<y<<endl;
    swap(x,y);
    cout <<"x= "<<x<<endl<<"y= "<<y<<endl;
    return(0);
}
void swap(int &x,int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}

/*
    My name is arko ghosh dastidar.
    I am undergoing computer science degree from Indian Institute Of Information Technology, Nagpur.
    My dream is become a pilot and be very rich one day and I will fullfill my dream one day.
*/