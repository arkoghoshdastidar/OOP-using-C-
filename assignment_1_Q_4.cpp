#include <iostream>
#include <iomanip>
using namespace std;

class complex
{
    float real;
    float imaginary;

public:
    complex(void)
    {
        real = 0;
        imaginary = 0;
    }
    complex(float real, float imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void display(void)
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
    friend complex operator+(complex, complex);
    friend complex operator-(complex, complex);
    friend complex operator*(complex, complex);
    friend complex operator/(complex, complex);
};
complex operator+(complex c1, complex c2)
{
    complex c;
    c.real = c1.real + c2.real;
    c.imaginary = c1.imaginary + c2.imaginary;
    return (c);
}
complex operator-(complex c1, complex c2)
{
    complex c;
    c.real = c1.real - c2.real;
    c.imaginary = c1.imaginary - c2.imaginary;
    return (c);
}
complex operator*(complex c1, complex c2)
{
    complex c;
    c.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    c.imaginary = c1.real * c2.imaginary + c2.real * c1.imaginary;
    return (c);
}
complex operator/(complex c1, complex c2)
{
    complex c;
    c.real = (c1.real * c2.real + c1.imaginary * c2.imaginary) / (c2.real * c2.real + c2.imaginary * c2.imaginary);
    c.imaginary = (c2.real * c1.imaginary - c1.real * c2.imaginary) / (c2.real * c2.real + c2.imaginary * c2.imaginary);
    return (c);
}

int main(void)
{
    complex c0,c1,c2;
    c1=complex(2,4);
    c2=complex(5,2);
    cout<<"c1 : ";
    c1.display();
    cout<<"c2 : ";
    c2.display();
    c0=c1+c2;
    c0.display();
    c0=c1-c2;
    c0.display();
    c0=c1*c2;
    c0.display();
    c0=c1/c2;
    c0.display();
    return (0);
}