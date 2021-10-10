#include<iostream>
using namespace std;
int main(void){
    float x,a,b,c;
    cout << "x=a/b-c \n" <<"Enter the values of a,b,c respectively\n";
    cin >> a >> b >> c;
    x=(a/b)-c;
    cout << "x = "<< x;
    return(0);
}