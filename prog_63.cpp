#include <iostream>
#include <iomanip>
using namespace std;

// copy constructor's introduction

class data_1
{
    int code;

public:
    void display(void)
    {
        cout << "code = " << code << endl;
    }
    data_1(void)
    {
        cout << "Msg : Void initialization"<<endl;
        code = 0;
    }
    data_1(int x)
    {
        cout << "Msg : Direct initialization"<<endl;
        code = x;
    }
    data_1(data_1 &x);
};

data_1 :: data_1(data_1 &x){
    cout << "Msg : initializing from the copy constructor"<<endl;
    code = x.code;
}

int main(void)
{
    data_1 d1(5);
    data_1 d2 = d1;
    data_1 d3(d2);
    data_1 d4;
    d4 = d3;
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    return (0);
}