#include<iostream>
#include<iomanip>
using namespace std;

inline float greatest(float a,float b,float c)
{
    if(a>=b)
    {
        if(a>=c)
        return(a);
        else
        return(c);
    }
    else
    {
        if(b>=c)
        return(b);
        else
        return(c);
    }
}

int main(void)
{
   int a,b,c;
   cout<<"ENTER THE VALUES OF a,b,c\n";
   cin>>a>>b>>c;
   cout<<greatest(a,b,c)<<" is the greatest among "<<a<<" "<<b<<" "<<c<<endl; 
   return(0);
}