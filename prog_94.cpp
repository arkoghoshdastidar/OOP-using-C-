#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
using namespace std;
// I/O in file handling
int main(void)
{
    char name[30];
    int age;
    ofstream out;
    out.open("file_1.txt");
    out<<"Arko Ghosh Dastidar\n";
    out<<"20"<<"\n";
    out.close();
    ifstream in;
    in.open("file_1.txt");
    in.getline(name,30);
    in>>age;
    in.close();
    cout<<"NAME : "<<name<<endl;
    cout<<"AGE : "<<age<<endl;
    return(0);
}