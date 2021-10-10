#include<iostream>
#include<string>
using namespace std;
// creating string objects
int main(void)
{
    string s1();                           //creating an empty string object s1
    string s2("My name is Arko.");        //creating a string object with parameterised constructor.
    string s3(s2+"I will become very rich one day.");//concatenating s2 with char* and passing it as argument to s3.
    cout<<s1<<endl<<s2<<endl<<s3<<endl;

    string s4;
    cin>>s4;                              //taking single word input form the keyboard.
    string s5;
    getline(cin,s5);                      //taking multiple lines input from the keyboard.
    cout<<endl<<s4<<endl<<s5<<endl;
    return(0);
}