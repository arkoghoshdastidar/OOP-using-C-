#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class String
{
    int len;
    char *s;

public:
    String(void){}
    void set(char *s)
    {
        len = strlen(s);
        s = new char(len + 1);
        strcpy(this->s, s);
    }
    void show(void)
    {
        cout << s << endl;
    }
    bool operator==(String s0);
};
bool String ::operator==(String s0)
{
    {
        if (strcmp(s, s0.s) == 0)
        {
            cout << "string equal\n";
            return (true);
        }
        else
        {
            cout << "strings not equal\n";
            return (false);
        }
    }
}
int main(void)
{
    String s1;
    s1.set("arko");
    String s2;
    s2.set("arko");
    s1.show();
    s2.show();
    cout << (s1 == s2) << endl;
    return (0);
}