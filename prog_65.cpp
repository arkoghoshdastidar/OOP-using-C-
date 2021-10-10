#include <iostream>
#include <iomanip>
using namespace std;

class matrix
{
    int r, c;
    int **arr;

public:
    matrix() {}
    matrix(int i, int j);
    int display(int i, int j)
    {
        return(arr[i][j]);
    }
    void putData(int i, int j, int val)
    {
        arr[i][j] = val;
    }
};

matrix ::matrix(int i, int j)
{
    cout << "Creating matrix of order : " << i << "*" << j << endl;
    r = i;
    c = j;
    arr = new int *[r];
    for (int k = 0; k < r; k++)
    {
        arr[k] = new int[c];
    }
}

int main(void)
{
    matrix m(3, 3);
    int val;
    cout << "Enter data into the matrix" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> val;
            m.putData(i, j, val);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<setw(4)<<m.display(i,j);
        }
        cout<<endl;
    }
    return (0);
}