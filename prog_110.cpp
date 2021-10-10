#include <iostream>
#include <iomanip>
using namespace std;
// template function with multiple parameters
template <class T>
T min_array(T arr[], int size)
{
    T min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return (min);
}
int main(void)
{
    int arr[10] = {0, 14, 7, 8, 1, -45, -11, 3, 2, 1};
    int min_val = min_array(arr,10);
    cout << "minimun value of arr[10] = " <<min_val<< endl;
    return (0);
}