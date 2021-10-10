#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
// relational operations on string data type.
int main(void)
{
    string s1("abc");
    string s2 = "xyz";
    cout<<"Using relational operators to compare string objects : "<<endl;
    if(s1==s2)
        cout<<s1<<" = "<<s2<<endl;
    else if(s1<s2)
        cout<<s1<<" < "<<s2<<endl;
    else
        cout<<s1<<" > "<<s2<<endl;
    cout<<"Using string_object.compare() to compare string objects : "<<endl;
    if(s1.compare(s2)==0)
        cout<<s1<<" = "<<s2<<endl;
    else if(s1.compare(s2)<0)
        cout<<s1<<" < "<<s2<<endl;
    else
        cout<<s1<<" > "<<s2<<endl;
    return(0);
}