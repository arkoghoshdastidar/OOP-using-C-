#include<iostream>
#include<iomanip>
using namespace std;

// default arguments inside a function

inline int amount(float principle,int duration,float rate = 0.1);

int main(void)
{
   float value,principle,rate;
   int duration;
   cout<<"Enter principle amount and duration : "<<endl;
   cin>>principle>>duration;
   if(principle>=5000&&duration>=10) 
    value = amount(principle,duration,0.2);
   else
    value = amount(principle,duration);

    cout<<"value of "<<principle<<" after "<<duration<<" year : "<<value<<endl;
   return(0);
}

inline int amount(float principle,int duration, float rate)
{
    return(principle*duration*(1+rate));
}