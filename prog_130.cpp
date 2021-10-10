#include <iostream>
#include <string>
using namespace std;
string replace_blank_with_underscore(string s)
{
    string::iterator iter = s.begin();
    int found = 0;
    while (found != -1)
    {
        found = s.find(" ", found);
        if (found != -1)
        {
            s.replace(found, 1, "_");
            found++;
        }
        else
        {
            break;
        }
    }
    return (s);
}
int main(void)
{
    string s1 = "lorem ipsum do cle diva";
    cout << s1 << endl;
    s1 = replace_blank_with_underscore(s1);
    cout << s1 << endl;
    return (0);
}