#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double sum(int n)
{
    double x = 0;
    for (int i = 1; i <= n; i++)
    {
        x += pow(i, -i);
    }
    return (x);
}

int main(void)
{
    int n;
    cout << "Enter the number of term (n) to be added : " << endl;
    cin >> n;
    for (int i = 1; i <= n;i++)
    {
        if(i == n)
        cout << "1/" << i << " = ";
        else
        cout << "1/" << i << " + ";
        
    }
    double x = sum(n);
    cout << x << endl;
    return (0);
}