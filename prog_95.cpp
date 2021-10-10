#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cstring>
#include<fstream>
using namespace std;
// Working with multiple files

int main(void)
{
    char country[30];
    char capital[30];
    ofstream out;
    out.open("file_2.txt");
    out<<"India\n";
    out<<"United States of America\n";
    out<<"United Kingdom";
    out.close();
    ofstream out2;
    out2.open("file_3.txt");   
    out2<<"New Delhi\n";
    out2<<"Washington DC\n";
    out2<<"London";
    out2.close();
    ifstream in_1;
    in_1.open("file_2.txt");
    ifstream in_2;
    in_2.open("file_3.txt");
    int count = 0;
    while(in_1&&in_2)
    {
        in_1.getline(country,30);
        in_2.getline(capital,30);
        if(count>=3){break;}
        cout<<"The capital of "<<country<<" is "<<capital<<endl;
        count++;
    }
    return(0);
}