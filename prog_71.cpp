#include <iostream>
#include <iomanip>
using namespace std;

// single inheritance : private

class base
{
    int a;

public:
    int b;
    int get_a(void)
    {
        return (a);
    }
    void display_a(void)
    {
        cout << "a = " << a << endl;
    }
    void get_ab(void)
    {
        cout << "Enter the values of a and b :" << endl;
        cin >> a >> b;
    }
};

class derived : private base
{
    int c;

public:
    void set_c(void)
    {
        get_ab();
        c = b * get_a();
    }
    void display(void)
    {
        display_a();
        cout << "b = " << b << endl
             << "c = " << c << endl;
    }
};

int main(void)
{
    derived D;
    D.set_c();
    D.display();
    return (0);
}