#include <iostream>
#include <iomanip>
using namespace std;

// Constructors in derived classes

class alpha
{
protected:
    int a;
    void display_alpha(void);

public:
    alpha(int _a);
};

alpha ::alpha(int _a)
{
    a = _a;
}
void alpha ::display_alpha(void)
{
    cout << "alpha = " << a << endl;
}

class beta
{
protected:
    int b;
    void display_beta(void);
public:
    beta(int _b);
};

beta ::beta(int _b)
{
    b = _b;
}
void beta ::display_beta(void)
{
    cout << "beta = " << b << endl;
}

class gamma : public alpha, public beta
{
    int g;

public:
    gamma(int a, int b, int _g) : alpha(a), beta(b)
    {
        g = _g;
    }
    void display(void);
};

void gamma ::display(void)
{
    display_alpha();
    display_beta();
    cout << "gamma = " << g << endl;
}

int main(void)
{
    gamma G(1,2,3);
    G.display();
    return (0);
}