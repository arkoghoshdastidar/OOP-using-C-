#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int fact(int n){
    if(n==0)
    return(1);
    else
    return(n*fact(n-1));
}

double cos(double x, int n){
    double cosx = 1;
    for(int i=1;i<n;i++)
    {
        cosx += ((pow(-1,i))*pow(x,2*i))/fact(2*i);
    }
    return(cosx);
}

int main(void)
{
    int n;
    double x;
    cout << "Enter the values of angle in radian x E(0,1) and number of terms : "<<endl;
    cin >> x >>n;
    cout << "cos("<<x<<") = "<<fixed<<setprecision(4)<<cos(x,n)<<endl;
    return(0);
}