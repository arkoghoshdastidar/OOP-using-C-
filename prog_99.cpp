#include <iostream>
#include <iomanip>
using namespace std;
// overloading [] operator

class Array
{
    int array[5];

public:
    Array();
    void operator[](int i);
    ~Array();
};
void Array:: operator[](int i)
{
    cout<<(array[i]);
    return;
}
Array::Array(void)
{
    cout << "Enter the values of the array elements" << endl;
    for (int i = 0; i < 5; i++)
        cin >> array[i];
}
Array::~Array()
{
    delete array;
}
int main(void)
{
    Array a;
    for(int i=0;i<5;i++)
        a[i];
    return (0);
}