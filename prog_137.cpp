#include<iostream>
using namespace std;

int main(void)
{
    int a,b;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    try
    {
        if((a-b)!=0)
            cout<<"Result = (a/(a-b)) = "<<(a/(a-b))<<endl;
        else
            throw(a-b);
    }
    catch(int)
    {
        cout<<"Exception:Denominator is equal to zero."<<endl;
    }
    cout<<"End of programme."<<endl;
    return(0);
}