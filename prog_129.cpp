#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;
void input_data(vector<string>& v)
{
    string temp_string;
    getline(cin,temp_string);
    v.push_back(temp_string);
    return;
}
void display(vector<string> v)
{
    vector<string>::iterator iter=v.begin();
    while(iter!=v.end())
    {
        if((*iter).front()=='B'||(*iter).front()=='C')
            cout<<(*iter);
        iter++;
        cout<<endl;
    }
    return;
}
int main(void)
{
    vector<string> v;
    input_data(v);
    input_data(v);
    input_data(v);
    input_data(v);
    input_data(v);
    display(v);
    return(0);
}