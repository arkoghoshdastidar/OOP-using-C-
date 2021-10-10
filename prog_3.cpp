#include<iostream>
using namespace std;
int main(void)
{
    cout << "Enter two numbers: \n";
    float num1,num2;
    cin >> num1 >> num2;
    if(num1>num2){
        cout << num1 <<" is the larger number.";
    }
    else if(num1==num2){
        cout << "num1=num2= "<< num1;
    }
    else{
        cout << num2 << " is the larger number.";
    }
    return(0);
}