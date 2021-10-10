#include <iostream>
#include <iomanip>
using namespace std;

// friend functions in C++

class complex
{
    int real;
    int imaginary;

public:
    void getData(void)
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
    void putData(void)
    {
        cout << "Enter the real and imaginary parts of the complex number : ";
        cin >> real;
        cin >> imaginary;
    }
    friend void add(complex, complex);
};

void add(complex c1, complex c2)
{
    int real = c1.real + c2.real;
    int imaginary = c1.imaginary + c2.imaginary;
    cout << real << " + " << imaginary << "i" << endl;
}

int main(void)
{
    complex c1, c2;
    c1.putData();
    c2.putData();
    c1.getData();
    c2.getData();
    add(c1, c2);
    return (0);
}