#include<iostream>
#include<iomanip>
#include<cstring>
#include<cmath>
using namespace std;
// class template with multiple parameters
template<class T1,class T2>
class _data
{
    T1 num1;
    T2 num2;
    public:
        _data(T1 num1,T2 num2){
            this->num1=num1;
            this->num2=num2;
            return;
        }
        void show(void){
            cout<<"num1 = "<<num1<<" num2 = "<<num2<<endl;
            return;
        }
};
int main(void)
{
    _data <int,int> d1(3,5);
    _data <int,float> d2(3,5.45);
    _data <char,int> d3('a',8);
    d1.show();
    d2.show();
    d3.show();
    return(0);
}