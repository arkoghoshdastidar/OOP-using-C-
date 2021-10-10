#include <iostream>
#include <iomanip>
using namespace std;
class data_
{
    int value;

public:
    data_(){}
    data_(int x)
    {
        value = x;
    }
    void display(void)
    {
        cout << "Value = " << value << endl;
    }
    friend void swap(data_ *d1, data_ *d2);
};
void swap(data_ *d1, data_ *d2)
{
    int temp = d1->value;
    d1->value = d2->value;
    d2->value = temp;
    return;
}
int main(void)
{
    data_ D1,D2;
    D1 = data_(2);
    D2 = data_(3);
    cout << "Before swapping : "<<endl;
    D1.display();
    D2.display();
    swap(&D1,&D2);
    cout << "After swapping : "<<endl;
    D1.display();
    D2.display();
    return (0);
}