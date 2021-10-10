#include<iostream>
using namespace std;
int main(void){
    float tempFarenheit;
    float tempCelsius;
    cout << "Enter the temperature in celsius : \n";
    cin >> tempCelsius;
    tempFarenheit = 9/5*tempCelsius + 32;
    cout << tempFarenheit<<" degF";
    return(0); 
}