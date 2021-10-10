#include <iostream>
#include <string>
#include <vector>
using namespace std;
void insert_city(vector<string> &v)
{
    string city;
    getline(cin, city);
    v.push_back(city);
    return;
}
void display(vector<string> &v)
{
    vector<string>::iterator iter = v.begin();
    while (iter != v.end())
    {
        cout << *(iter++) << " ";
    }
    cout << endl;
    return;
}
void sort_city(vector<string> &v)
{
    string temp;
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v.at(i).compare(v.at(j))>0)
            {
                temp=v.at(i);
                v.at(i)=v.at(j);
                v.at(j)=temp;
            }
        }
    }
    return;
}
int main(void)
{
    vector<string> city;
    insert_city(city);
    insert_city(city);
    insert_city(city);
    insert_city(city);
    insert_city(city);
    sort_city(city);
    display(city);
    return (0);
}