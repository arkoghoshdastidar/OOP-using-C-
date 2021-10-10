#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class String
{
    char *str;
    int length;

public:
    void display(void)
    {
        cout << str << endl;
    }
    String(void);
    String(char *xtr);
    friend char *ConCat(String, String);
};

String :: String(void)
{
    length = 0;
    str = new char[length+1];
}

String :: String(char *xtr)
{
    length = strlen(xtr);
    str = new char[length+1];
    strcpy(str,xtr);
}

char* ConCat(String s1,String s2)
{
    int length = s1.length + s2.length +1;
    char *ret = new char[length];
    strcpy(ret,s1.str);
    strcat(ret," ");
    strcat(ret,s2.str);
    return(ret);
}

int main(void)
{
    String s1("Arko");
    String s2("Ghosh");
    char *ch = ConCat(s1,s2);
    cout << ch << endl;
    return (0);
}