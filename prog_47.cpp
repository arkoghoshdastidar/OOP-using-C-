#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
    for (float i = 0.0; i <= 9.0; i++)
    {
        for(float j = 0.1;j<0.9;j+=0.1)
        {
            float y = exp(-(i+j));
            cout<<setw(10)<<fixed<<setprecision(5)<<y;
        }
        cout<<endl;
    }
    return (0);
}