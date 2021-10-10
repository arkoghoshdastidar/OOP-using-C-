#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> v(10);
    for(int i=0;i<10;i++)
    {
        if(i==0)
            v.at(i)=0;
        else if(i==9)
            v.at(i)=9;
        else
            v.at(i)=1;
        cout<<fixed<<setprecision(3)<<v.at(i)<<" ";
    }
    cout<<endl;
    return(0);
}