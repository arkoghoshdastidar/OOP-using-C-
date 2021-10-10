#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
// String characteristics
void display(const string &s1)
{
    cout<<"string size = "<<s1.size()<<endl;
    cout<<"string length = "<<s1.length()<<endl;
    cout<<"string capacity = "<<s1.capacity()<<endl;
    cout<<"string max_size = "<<s1.max_size()<<endl;
    cout<<"string empty = "<<((s1.empty())?"yes":"no")<<endl;
    return;
}
int main(void)
{
    string s1("rick");
    string s2;
    display(s1);
    display(s2);
    return(0);
}