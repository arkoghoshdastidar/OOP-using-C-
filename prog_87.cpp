#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
// this pointer in C++

class student
{
    int marks;
    char *name;

public:
    student()
    {
        marks = 0;
        name = new char[1];
    }
    void set_data(void)
    {
        char _name[30];
        int _marks;
        cout << "Enter the name of the student : " << endl;
        cin >> _name;
        cout << "Enter the marks of the student : " << endl;
        cin >> _marks;
        this->marks = _marks;
        name = new char[strlen(_name) + 1];
        strcpy(name, _name);
    }
    void display_data(void)
    {
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
    student &greater(student &S)
    {
        if (S.marks > marks)
            return (S);
        else
            return (*this);
    }
};

int main(void)
{
    student S1,S2,S3;
    S1.set_data();
    S2.set_data();
    S3 = S1.greater(S2);
    cout << "Student with greater marks"<<endl;
    S3.display_data();
    return (0);
}