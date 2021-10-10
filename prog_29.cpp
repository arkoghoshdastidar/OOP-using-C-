#include <iostream>
#include <iomanip>
using namespace std;

int** createMatrix(int c, int **matrix, int r = 2)
{
    matrix = new int *[r];
    for (int i = 0; i < r; i++)
        matrix[i] = new int[c];

    cout << "Enter the values of the matrix" << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }
    return(matrix);
}

int main(void)
{
    int c, **matrix;
    cout << "Enter the number of columns : " << endl;
    cin >> c;
    matrix = createMatrix(c, matrix);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<setw(4)<<matrix[i][j];
        }
        cout<<endl;
    }
    return (0);
}