#include<iostream>
#include<string>
using namespace std;
// using overloaded + operator to concatenate two strings.
int main(void)
{
    string s1("My name is Arko.");
    string s2("I will full fill my dreams one day.");
    string s3 = s1+s2;
    cout<<s3;
    return(0);
}