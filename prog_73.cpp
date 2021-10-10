#include<iostream>
#include<iomanip>
using namespace std;

// example of multiple inheritance

class base_1
{
protected:
    int m1;
public:
    void set_base_1(int temp){
        m1 = temp;
        return;
    }
};

class base_2
{
protected:
    int m2;
public:
    void set_base_2(int temp){
        m2 = temp;
        return;
    }
};

class derived : public base_1,public base_2
{
    int d1;
public:
    void set_derived(void){
        d1 = m1*m2;
        return;
    }
    void display(void){
        cout << "m1 = "<<m1<<endl<<"m2 = "<<m2<<endl<<"d1 = m1*m2 = "<<d1<<endl;

    }
};

int main(void)
{
    derived d1;
    d1.set_base_1(2);
    d1.set_base_2(6);
    d1.set_derived();
    d1.display();
    return(0);
}