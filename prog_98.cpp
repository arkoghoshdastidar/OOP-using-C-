#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
// string concatenation using + operator

class String
{
    char *s;
    int len;

public:
    String(void);
    String(const char *_s);
    String(const String &_s);
    ostream &operator<<(ostream &out);
    friend String operator+(String, String);
    friend bool operator<=(String, String);
    void show(){
        cout<<s<<endl;
    }
    ~String();
};
String ::String(void)
{
    len = 0;
    s = new char(len + 1);
}
String::String(const char *_s)
{
    len = strlen(s);
    s = new char(len + 1);
    strcpy(s, _s);
    cout<<s<<endl;
}
String ::String(const String &_s)
{
    len = _s.len;
    s = new char(len + 1);
    strcpy(s, _s.s);
}
String::~String(void)
{
    delete[] s;
}
ostream &String ::operator<<(ostream &out)
{
    out << s;
    return(out);
}
String operator+(String s1, String s2)
{
    String s0;
    s0.len = s1.len + s2.len;
    s0.s = new char(s0.len + 1);
    strcpy(s0.s, s1.s);
    strcat(s0.s, " ");
    strcat(s0.s, s2.s);
    return (s0);
}
bool operator<=(String s1, String s2)
{
    if (s1.len <= s2.len)
        return (true);
    else
        return (false);
}
int main(void)
{
    String s1, s2, s3;
    s1 = "New";
    s2 = "York";
    s3 = s1 + s2;
    s3.show();
    return (0);
}