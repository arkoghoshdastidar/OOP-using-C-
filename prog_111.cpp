#include<iostream>
#include<iomanip>
using namespace std;
// overloading template function with multiple parameters
void display(int x){
    cout<<"msg:explicit display function running: x = "<<x<<endl;
    return;
}
template <class T>
void display(T x){
    cout<<"msg:generic display function running: x = "<<x<<endl;
    return;
}
template <class T,class T1>
void display(T x1,T1 x2){
    cout<<"msg:generic display function with two arguments running: x1 = "<<x1<<" x2 = "<<x2<<endl;
}
int main(void)
{
    display(101);
    display(1.90);
    display(2,'A');
    display("ARKO");
    return(0);
}