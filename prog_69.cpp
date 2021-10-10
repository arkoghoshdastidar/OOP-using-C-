#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class prime
{
    unsigned int data;

public:
    prime(void){};
    prime(unsigned int);
    ~prime(){}
};

prime ::prime(unsigned int x)
{
    if (x < 0)
    {
        cout << "Negative number cannot be stored in prime class." << endl;
        return;
    }
    int counter = 0;
    data = x;
    if (x == 1)
    {
        cout << data << " is neither prime nor composite." << endl;
        return;
    }

    else
    {
        for (int i = 1; i <= data; i++)
        {
            if (data % i == 0)
                counter += 1;
            else
                continue;
        }
        if (counter == 2)
            cout << data << " is a prime number." << endl;
        else
            cout << data << " is a composite number." << endl;
    }
    return;
}

int main(void)
{
    prime num1(1);
    prime num2(2);
    prime num3(23);
    prime num4(53);
    prime num5(29);
    prime num6(44);
    prime num7(58);
    prime num8(19);
    prime num9(112);
    return (0);
}