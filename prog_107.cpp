#include<iostream>
#include<iomanip>
using namespace std;
// default class templates
template <class T1=int,class T2=int>
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
    _data <> d1(1,2);
    d1.show();
    _data <char,float> d2('a',2.875);
    d2.show();
    return(0);
}