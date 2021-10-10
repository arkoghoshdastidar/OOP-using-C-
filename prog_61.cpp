#include <iostream>
#include <iomanip>
using namespace std;

// constructor with default arguments

class complex
{
    int x, y;

public:
    complex(int i = 0, int j = 0)
    {
        x = i;
        y = j;
    }
    void display(void)
    {
        cout << x << " + " << y << "i" << endl;
    }
};

int main(void)
{
    complex c1;
    c1.display();
    complex c2(3);
    c2.display();
    complex c3(1,2);
    c3.display();
    return (0);
}