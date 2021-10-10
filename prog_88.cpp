#include <iomanip>
#include <iostream>
#include <cstring>
using namespace std;
// pointer to derived classes

class A
{
public:
    int callA;
    A()
    {
        callA = 0;
    }
    void set_data(int callA)
    {
        this->callA = callA;
    }
    void display(void)
    {
        cout << "display function of class A called " << endl;
        cout << "callA = " << callA << endl;
    }
};

class B : public A
{
public:
    int callB;
    B()
    {
        callB = 0;
    }
    void set_data(int callB)
    {
        this->callB = callB;
    }
    void display(void)
    {
        cout << "display function of class B called " << endl;
        cout << "callB = " << callB << endl;
    }
};

int main(void)
{
    A A1;
    B B1;
    A1.set_data(1);
    B1.set_data(2);
    A *aPtr;
    aPtr = &A1; // making aPtr to point to the starting address of A1
    aPtr->display();
    aPtr = &B1; // making aPtr to point to the starting address of B1
    aPtr->display();
    return (0);
}