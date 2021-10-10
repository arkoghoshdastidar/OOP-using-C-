#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class binary
{
    string s;

public:
    void getData(void);
    void putData(void);
    void ones(void);
    void chk_data(void);
};

void binary ::getData(void)
{
    cout << "Enter the binary number : " << endl;
    cin >> s;
    chk_data();
}

void binary ::putData(void)
{
    cout << "x  = " << s << endl;
}

void binary ::chk_data(void)
{
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << s << " is not a binary number...exiting the program" << endl;
            exit(0);
        }
    }
    cout << s << " is a binary number" << endl;
}

void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
    cout << "x' = " << s <<endl;
}

int main(void)
{
    binary x;
    x.getData();
    x.putData();
    x.ones();
    return (0);
}