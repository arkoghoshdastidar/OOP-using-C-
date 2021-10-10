#include<iostream>
#include<iomanip>
#include<list>
using namespace std;
int main(void)
{
    list<int> even;
    list<int> odd;
    for(int i=0;i<=100;i++)
    {
        if(i%2==0){
            even.push_back(i);
        }
        else{
            odd.push_back(i);
        }
    }
    even.merge(odd);
    list<int>:: iterator iter = even.begin();
    while(iter!=even.end())
    {
        cout<<*(iter++)<<" ";
    }
    return(0);
}