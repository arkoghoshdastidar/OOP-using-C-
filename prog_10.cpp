#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
    float V,P,r,product=1;
    int n;
    cout << "Enter the principal amount : ";
    cin >> P;
    cout <<endl<< "Enter the rate of interest : ";
    cin >>r;
    cout <<endl<< "Enter the number of years : ";
    cin >>n;
    for(int i=1;i<=n;i++){
        product*=(1+r/100);
    }
    V=product*P;
    cout <<endl<<"The value after "<<n<<" years : "<<V;
    return(0);
}