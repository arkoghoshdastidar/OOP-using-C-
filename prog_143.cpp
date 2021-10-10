#include<iostream>
using namespace std;

int main(void)
{
    try
    {
        int a,b;
        cin>>a>>b;
        if(b==0){
            throw(0);
        }
        else{
            cout<<"a/b="<<(a/b)<<endl;
        }
    }
    catch(int)
    {
        cout<<"Exception:Dividing by zero"<<endl;
    }
    cout<<"End of programme"<<endl;
    return(0);
}