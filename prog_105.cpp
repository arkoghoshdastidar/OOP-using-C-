#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;
// class templates
template <class T>
class vector
{
    T *array;
    int size;

public:
    vector(T *a, int size)
    {
        this->size = size;
        array = new T[size];
        for (int i = 0; i < size; i++)
            array[i] = a[i];
    }
    void show(void)
    {
        for (int i = 0; i < size; i++)
            cout << array[i] << "\t";
        cout << "\n";
    }
    T operator*(vector v)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
            sum += this->array[i] * v.array[i];
        return (sum);
    }
};

int main(void)
{
    int array1[3] = {2, 3, -3};
    int array2[3] = {5, 2, -6};
    vector<int> v1(array1, 3);
    vector<int> v2(array2, 3);
    cout << "v1=";
    v1.show();
    cout << "v2=";
    v2.show();
    int dtPdt = v1 * v2;
    cout << "v1*v2 = " << dtPdt << endl;
    float array3[3] = {2.35, 1.89, 3.68};
    float array4[3] = {-1.47, -3.00, 7.85};
    vector<float> v3(array3, 3);
    vector<float> v4(array4, 3);
    float dpt = v3 * v4;
    cout << "v3=";
    v3.show();
    cout << "v4=";
    v4.show();
    cout << "v3*v4=" << dpt << endl;
    return (0);
}