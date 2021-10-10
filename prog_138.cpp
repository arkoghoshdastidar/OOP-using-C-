#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
    int R;
    if((x-y)!=0)
        R=(z/(x-y));
    else
        throw(0);
    cout<<"R=z/(x-y)="<<R<<endl;
    return;
}
int main(void)
{
    try 
    {
        divide(10,20,30);
        divide(10,10,5);
    }
    catch(int)
    {
        cout<<"Exception:Trying to divide by zero."<<endl;
    }
    cout<<"end of programme.";
    return(0);
}