#include<iostream>
#include<iomanip>
using namespace std;
// function templates
template<class T>
void _swap(T &t1,T &t2){
    T temp = t1;
    t1 = t2;
    t2 = temp;
    return;
}

int main(void)
{
    int x,y;
    float a,b;
    cin>>x>>y;
    cin>>a>>b;
    cout<<"Before swapping value of x = "<<x<<" and value of y = "<<y<<endl;
    cout<<"Before swapping value of a = "<<a<<" and value of b = "<<b<<endl;
    _swap(x,y);
    _swap(a,b);
    cout<<"After swapping value of x = "<<x<<" and value of y = "<<y<<endl;
    cout<<"After swapping value of a = "<<a<<" and value of b = "<<b<<endl;
    
    return(0);
}