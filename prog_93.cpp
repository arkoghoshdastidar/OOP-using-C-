#include <iostream>
#include <iomanip>
using namespace std;

class arrayFunc
{
public:
    virtual void setData(void) = 0;
    virtual void showData(void) = 0;
    virtual void sortAscending(void) = 0;
};

class _array : public arrayFunc
{
    int size;
    int *arr;

public:
    void setData(void);
    void showData(void);
    void sortAscending(void);
    friend void sortDescending(_array &);
};
void _array ::setData(void)
{
    cout << "Enter the size of the array : " << endl;
    cin >> size;
    arr = new int[size];
    cout << "Enter the values of the array elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void _array::showData(void)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return;
}
void _array::sortAscending(void)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return;
}
void sortDescending(_array &_arr)
{
    for (int i = 0; i < _arr.size - 1; i++)
    {
        for (int j = i + 1; j < _arr.size; j++)
        {
            if (_arr.arr[j] > _arr.arr[i])
            {
                int temp=_arr.arr[i];
                _arr.arr[i]=_arr.arr[j];
                _arr.arr[j]=temp;
            }
        }
    }
    return;
}
int main(void)
{
    _array a;
    a.setData();
    a.showData();
    a.sortAscending();
    a.showData();
    sortDescending(a);
    a.showData();
    return (0);
}