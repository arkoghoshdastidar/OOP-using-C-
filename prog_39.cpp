#include <iostream>
#include <iomanip>
using namespace std;

// objects as function arguments in member functions.

class complex
{
    int real;
    int imaginary;

public:
    void putData()
    {
        cout << "Enter real and complex parts of the complex number : "<<endl;
        cin >> real;
        cin >> imaginary;
    }
    void display(void)
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
    void sum(complex c1, complex c2);
};

void complex ::sum(complex c1, complex c2)
{
    real = c1.real + c2.real;
    imaginary = c1.imaginary + c2.imaginary;
}

int main(void)
{
    complex c1, c2, c3;
    c1.putData();
    c2.putData();
    c3.sum(c1, c2);
    c1.display();
    c2.display();
    c3.display();
    return (0);
}