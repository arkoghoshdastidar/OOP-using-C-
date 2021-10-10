#include <iostream>
#include <iomanip>
using namespace std;
// Ex: 12.2:-
template <class T>
class vector
{
    T *arr;
    int size;

public:
    vector(T *arr, int size);
    void modify(int index, T val);
    T dtPdt(vector v);
    void display(void);
};
template <class T>
vector<T>::vector(T *arr, int size)
{
    this->size = size;
    this->arr = new T[size];
    for (int i = 0; i < size; i++)
        this->arr[i] = *(arr+i);
    return;
}
template <class T>
void vector<T>::modify(int index, T val)
{
    this->arr[index] = val;
    return;
}
template <class T>
T vector<T>::dtPdt(vector v)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
        sum += this->arr[i] * v.arr[i];
    return (sum);
}
template <class T>
void vector<T>::display(void)
{
    for (int i = 0; i < size; i++)
        cout << this->arr[i] << "\t";
    cout << "\n";
    return;
}
int main(void)
{
    int x[3] = {2, 4, 3};
    int y[3] = {-5, 6, 3};
    vector<int> v1(x, 3);
    vector<int> v2(y, 3);
    v1.display();
    v2.display();
    int dPt = v1.dtPdt(v2);
    cout << "Dot product of v1 and v2 = " << dPt << endl;
    return (0);
}