#include<iostream>
using namespace std;

void divide(double x,double y)
{
    try
    {
        if(y==0)
            throw(1);
        else
            cout<<"x/y = "<<(x/y)<<endl;
    }
    catch(int)
    {
        cout<<"Exception:Denominator is equal to zero."<<endl;
        throw;
    }
    return;
}

int main(void)
{
    try
    {
        divide(3,2);
        divide(3,0);
    }
    catch(...)
    {
        cout<<"Exception:Denominator is equal to zero."<<endl;
    }
    cout<<"End of programme."<<endl;
    return(0);
}