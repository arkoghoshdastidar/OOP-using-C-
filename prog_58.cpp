#include <iostream>
#include <iomanip>
using namespace std;

// creating default constructor
class integer
{
    int m, n;

public:
    integer(void);
    void display(void);
};

integer ::integer(void)
{
    m = 0;
    n = 0;
}

void integer ::display(void)
{
    cout << "m = " << m << endl
         << "n = " << n << endl;
}

int main(void)
{
    integer x;
    x.display();
    return (0);
}