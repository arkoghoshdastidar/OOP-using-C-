#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void display(string &s)
{
    string::iterator iter=s.begin();
    while(iter!=s.end())
    {
        cout<<*(iter++);
    }
    cout<<endl;
    return;
}
int main(void)
{
    string first_name;
    string second_name;
    string last_name;
    cin>>first_name>>second_name>>last_name;
    string temp_full_name;
    cout<<"Appending using + operator : ";
    temp_full_name=first_name+" "+second_name+" "+last_name;
    display(temp_full_name);
    cout<<"Appending using append() member function :";
    temp_full_name.assign(" ");
    temp_full_name.append(first_name);
    temp_full_name.append(" ");
    temp_full_name.append(second_name);
    temp_full_name.append(" ");
    temp_full_name.append(last_name);
    display(temp_full_name);
    return(0);
}