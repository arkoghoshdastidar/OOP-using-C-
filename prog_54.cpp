#include <iostream>
#include <iomanip>
using namespace std;

class faculty
{
    int id;
    char name[50];
    char post[50];
    char qualification[50];
    static int counter;

public:
    void putData(void);
    void displayData(void);
};

int faculty ::counter = 0;

void faculty ::putData(void)
{
    counter = counter + 1;
    id = counter;
    cout << "Enter name " << endl;
    cin >> name;
    cout << "Enter post " << endl;
    cin >> post;
    cout << "Enter qualification " << endl;
    cin >> qualification;
}

void faculty ::displayData(void)
{
    cout << "id : " << id << endl
         << "name : " << name << endl
         << "post : " << post << endl
         << "qualification : " << qualification << endl;
}

int main(void)
{
    faculty hari;
    hari.putData();
    hari.displayData();
    return (0);
}