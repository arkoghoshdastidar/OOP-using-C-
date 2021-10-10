#include<iostream>
#include<iomanip>
using namespace std;
void read(int&,int&);
int divide(int a,int b);
int main(void)
{
    int a,b;
    read(a,b);
    try{
        divide(a,b);
    }
    catch(int){
        cout<<"Exception:Trying to divide by zero"<<endl;
    }
    return(0);
}
void read(int &a,int &b)
{
    cin>>a>>b;
    return;
}
int divide(int a,int b)
{
    if(b==0)
        throw(0);
    else
        cout<<a<<"/"<<b<<"="<<(a/(float)b)<<endl;
    return(0);
}