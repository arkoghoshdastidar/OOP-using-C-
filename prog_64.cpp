#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

// dyanamic constructor introduction

class _string{
    char *str;
    int length;
    public:
        _string(void);
        _string(char *s);
        void display(void);
        void join(_string &,_string &);
};

void _string :: display(void){
    cout << str <<endl;
}

_string :: _string(void){
    length = 0;
    str = new char[length+1];
}

_string :: _string(char *s){
    length = strlen(s);
    str = new char[length+1];
    strcpy(str,s);
}

void _string :: join(_string &s1,_string &s2){
    length = s1.length+s2.length;
    str = new char[length+1];
    strcpy(str,s1.str);
    strcat(str,s2.str);
}

int main(void)
{
   _string s1("arko "),s2("ghosh "),s3("dastidar"),s4;
   s4.join(s1,s2);
   s1.display(); 
   s2.display(); 
   s3.display(); 
   return(0);
}