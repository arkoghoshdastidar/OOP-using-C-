#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
// array of pointer to object

class city
{
    int length;
    char *name;

public:
    city()
    {
        length = 0;
        name = new char[length + 1];
    }
    void set_data()
    {
        char _name[30];
        cout << "Enter the name of the city : " << endl;
        cin >> _name;
        length = strlen(_name);
        name = new char[length + 1];
        strcpy(name, _name);
    }
    void display_data(int i)
    {
        cout << "Name of city " << (i + 1) << " is " << name << endl;
        return;
    }
};

int main(void)
{
    city *cityPtr[5];
    for (int i = 0; i < 5; i++)
    {
        cityPtr[i] = new city;
        (*cityPtr[i]).set_data();
    }
    for (int i = 0; i < 5; i++)
    {
        cityPtr[i]->display_data(i);
    }
    return (0);
}