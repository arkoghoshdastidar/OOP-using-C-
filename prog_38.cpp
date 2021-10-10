#include <iostream>
#include <iomanip>
using namespace std;

// arrays of objects

class employee
{
    char name[40];
    int age;
    float salary;

public:
    void putData(void);
    void getData(void);
};

void employee ::getData(void)
{
    cout << "Enter the name of the employee :" << endl;
    cin >> name;
    cout << "Enter the age and salary of the employee :" << endl;
    cin >> age >> salary;
}

void employee ::putData(void)
{
    cout << "name : " << name << " age : " << age << " salary : " << salary << endl;
}

int main(void)
{
    employee softwareEngineer[3];
    cout << "Enter the details of the employee's " << endl;
    for (int i = 0; i < 3; i++)
    {
        softwareEngineer[i].getData();
    }
    for (int i = 0; i < 3; i++)
        softwareEngineer[i].putData();
    return (0);
}