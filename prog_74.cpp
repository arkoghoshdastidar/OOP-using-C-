#include <iostream>
#include <iomanip>
using namespace std;

// resolving abiguity in classes

class A
{
public:
    void display(void)
    {
        cout << "This is class A or derived class of A" << endl;
    }
};

class B
{
public:
    void display(void)
    {
        cout << "This is class B or derived class of B" << endl;
    }
};

class C : public A, public B
{
public:
    void display(void)
    {
        A :: display();
    }
};

int main(void)
{
    C C_obj;
    C_obj.display();        // It will invoke the display function of class A
    C_obj.B::display();     // It will invoke the display fuction of class B
    C_obj.A::display();     //It will invoke the display function of class A
    return (0);
}