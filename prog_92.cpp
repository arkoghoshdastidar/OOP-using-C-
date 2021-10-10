#include <iostream>
#include <iomanip>
using namespace std;

class _data
{
    int val;

public:
    _data(int val)
    {
        this->val = val;
    }
    friend int calFact(_data);
};

int (*funcPtr)(_data);

int calFact(_data d)
{
    if ((d.val) == 0)
        return (1);
    return (d.val * (calFact(d.val - 1)));
}

int main(void)
{
    _data d1(5);
    funcPtr = &calFact;
    cout << (funcPtr(d1)) << endl;
    return (0);
}