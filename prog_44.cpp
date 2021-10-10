#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double sin(double x, int n);
int fact(int n);

int main(void)
{
    int n;
    double x;
    cout << "Enter the value of x in radians and the number of terms n : " << endl;
    cin >> x;
    cin >> n;
    double sinx = sin(x, n);
    cout << "sin(" << x << ") = " << sinx << endl;
    return (0);
}

double sin(double x, int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += ((pow(-1, i + 1)) * (pow(x, 2 * i - 1))) / fact(2 * i - 1);
    }
    return (sum);
}

int fact(int n)
{
    if (n == 0)
        return (1);
    else
        return (n * fact(n - 1));
}