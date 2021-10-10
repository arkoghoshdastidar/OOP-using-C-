#include <iostream>
#include <iomanip>
using namespace std;

// single inheritance : public

class base
{
    int a;

public:
    int b;
    void set_ab(void);
    void display_a(void);
    int get_a(void);
};

void base ::set_ab(void)
{
    cout << "Enter the values of a and b : " << endl;
    cin >> a >> b;
}

void base ::display_a(void)
{
    cout << "a = " << a << endl;
}

int base ::get_a(void)
{
    return (a);
}

class derived : public base
{
    int c;

public:
    void set_c(void);
    void display(void);
};

void derived ::set_c(void)
{
    c = b * get_a();
    return;
}

void derived ::display(void)
{
    display_a();
    cout << "b = " << b << endl
         << "c = " << c << endl;
    return;
}

int main(void)
{
    derived D;
    D.set_ab();
    D.set_c();
    D.display();
    return (0);
}