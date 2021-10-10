#include <iostream>
#include <iomanip>
using namespace std;

int (*fptr)(int a, int b);

int add(int a, int b)
{
    return (a + b);
}

int sub(int a, int b)
{
    return (a - b);
}

int mul(int a, int b)
{
    return (a * b);
}

int divide(int a, int b)
{
    return (a / b);
}

int main(void)
{
    int a, b;
    char op;
    int condition = 0;
    while(condition!=-1)
    {
        cout << "Enter : " << endl;
        cin >> a >> op >> b;
        switch (op)
        {
        case '+':
            fptr = &add;
            cout << (fptr(a, b)) << endl;
            break;
        case '-':
            fptr = &sub;
            cout << (fptr(a, b)) << endl;
            break;
        case '*':
            fptr = &mul;
            cout << (fptr(a, b)) << endl;
            break;
        case '/':
            fptr = &divide;
            cout << (fptr(a, b)) << endl;
            break;
        default:
            cout<<"Invalid Entry"<<endl;
        }
        cout<<"Enter -1 to abort"<<endl;
        cin >> condition;
    }
    return (0);
}