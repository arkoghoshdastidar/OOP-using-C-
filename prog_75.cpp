#include <iostream>
#include <iomanip>
using namespace std;

// example of hybrid inheritance

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int roll)
    {
        roll_number = roll;
    }
    void display_roll_number(void)
    {
        cout << "Roll number : " << roll_number << endl;
    }
};

class test : public student
{
protected:
    int subject_1, subject_2;

public:
    void set_marks(int m1, int m2)
    {
        subject_1 = m1;
        subject_2 = m2;
    }
    void display_marks(void)
    {
        cout << "Marks of subject_1 = " << subject_1 << endl
             << "Marks of subject_2 = " << subject_2 << endl;
    }
};

class sports
{
protected:
    int sports_marks;

public:
    void set_sports_marks(int m)
    {
        sports_marks = m;
    }
    void display_sports_marks(void)
    {
        cout << "Sports marks = " << sports_marks << endl;
    }
};

class result : public test,public sports
{
    float percentage;
public:
    void display_result(void){
        display_roll_number();
        display_marks();
        display_sports_marks();
        cout << "Percentage = "<<fixed<<setprecision(2)<<(subject_1+subject_2+sports_marks)/3.0<<"%"<<endl;
        return;
    }
    ~result(){}
};

int main(void)
{
    result arko;
    arko.set_roll_number(53);
    arko.set_sports_marks(98);
    arko.set_marks(55,70);
    arko.display_result();
    return (0);
}