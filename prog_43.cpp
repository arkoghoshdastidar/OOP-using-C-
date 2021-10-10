#include <iostream>
#include <iomanip>
using namespace std;

// returning an object

class matrix
{
    int arr[3][3];

public:
    void create(void);
    void display(void);
    friend matrix transpose(matrix);
};

void matrix ::create(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the value of arr[" << i << "][" << j << "] : ";
            cin >> arr[i][j];
            cout << endl;
        }
    }
}

void matrix :: display(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
}

matrix transpose(matrix m1)
{
    matrix m2;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m2.arr[i][j] = m1.arr[j][i];
        }
    }
    return(m2);
}

int main(void)
{
    matrix m1,m2;
    m1.create();
    m1.display();
    cout<<endl<<endl<<endl;
    m2 = transpose(m1);
    m2.display();
    return (0);
}