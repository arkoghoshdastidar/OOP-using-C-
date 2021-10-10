#include<iostream>
using namespace std;
int main(void){
    cout << "Enter any character : \n";
    char ch;
    cin >> ch;
    int asciiCh = (int)ch;
    cout << "ASCII value of ch is " << asciiCh;
    return(0);
}