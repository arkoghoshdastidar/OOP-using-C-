#include <iostream>
#include <iomanip>
using namespace std;

// accessing objects using reference

class data_2
{
    int id;

public:
    void putData(int a)
    {
        id = a;
    }
    void getData(void)
    {
        cout << "data : " << id << endl;
    }
    friend void swap(data_2 &, data_2 &);
};

void swap(data_2 &d1, data_2 &d2)
{
    int temp = d1.id;
    d1.id = d2.id;
    d2.id = temp;
}

int main(void)
{
    data_2 d1, d2;
    cout << "BeforeSwapping" << endl;
    d1.putData(10);
    d1.getData();
    d2.putData(20);
    d2.getData();
    swap(d1, d2);
    cout << "AfterSwapping" << endl;
    d1.getData();
    d2.getData();
    return (0);
}