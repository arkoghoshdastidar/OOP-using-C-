#include <iostream>
#include <iomanip>
using namespace std;

// example of multilevel inheritance

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    int get_roll_number(void);
};
void student ::set_roll_number(int roll)
{
    roll_number = roll;
    return;
}
int student ::get_roll_number(void)
{
    return (roll_number);
}

class test : public student
{
protected:
    int sub1, sub2;

public:
    void set_marks(int, int);
    void display_marks(void);
};
void test ::set_marks(int m1, int m2)
{
    sub1 = m1;
    sub2 = m2;
    return;
}
void test ::display_marks(void)
{
    cout << "SUB1 marks = " << sub1 << endl
         << "SUB2 marks = " << sub2 << endl;
    return;
}

class result : public test
{
    float percentage;

public:
    void set_percentage(void);
    void display_result(void);
};
void result ::set_percentage(void)
{
    percentage = (sub1 + sub2) / 2.0;
    return;
}
void result ::display_result(void)
{
    cout << "Percentage obtained = " << percentage <<"%"<< endl;
    return;
}
int main(void)
{
    result student_1;
    student_1.set_roll_number(53);
    student_1.set_marks(100,98);
    student_1.set_percentage();
    student_1.display_marks();
    student_1.display_result();
    return (0);
}