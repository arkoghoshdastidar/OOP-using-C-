#include<iostream>
using namespace std;
void show(int x) throw(int,char,double)
{
    if(x==-1)
        throw(1);
    else if(x==0)
        throw('1');
    else if(x==1)
        throw(1.00);
    // else
    //     throw("string");
}
int main(void)
{
    int x;
    try
    {
        cin>>x;
        show(x);
    }
    catch(...)
    {
        cout<<"Exception caught successfully";
    }
    cout<<"End of programme";
    return(0);
}