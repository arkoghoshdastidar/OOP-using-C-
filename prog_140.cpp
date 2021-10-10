#include <iostream>
#include <string>
using namespace std;
class error
{
    int error_code;
    string error_description;

public:
    error(int e, string s) : error_code(e), error_description(s) {}
    void display(void);
};
void error::display(void)
{
    cout << "error_code : " << error_code << endl << "error_description : " << error_description << endl;
}
int main(void)
{
    int x;
    try
    {
        cin>>x;
        error e1(404,"Webpage not found");
        throw(e1);
    }
    catch(error e)
    {
        e.display();
    }
    return (0);
}