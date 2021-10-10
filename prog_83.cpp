#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class staff
{
    char *code;
    char *firstName;
    char *lastName;

public:
    void set_staff_details(char *_code, char *fname, char *lname);
    void show_staff_details(void);
};
void staff ::show_staff_details(void)
{
    cout << "CODE : " << code << endl
         << "NAME : " << firstName << " " << lastName << endl;
}
void staff ::set_staff_details(char *_code, char *fname, char *lname)
{
    code = new char[strlen(_code) + 1];
    strcpy(code, _code);
    firstName = new char[strlen(fname) + 1];
    strcpy(firstName, fname);
    lastName = new char[strlen(lname) + 1];
    strcpy(lastName, lname);
}

class teacher
{
    staff teachingStaff;
    char *subject;

public:
    teacher(char *_code, char *_fname, char *_lname, char *_subject)
    {
        subject = new char[strlen(_subject) + 1];
        strcpy(subject, _subject);
        teachingStaff.set_staff_details(_code, _fname, _lname);
    }
    void show_teacher_details(void)
    {
        teachingStaff.show_staff_details();
        cout << "SUBJECT : " << subject << endl;
    }
};

class typist
{
protected:
    staff typingStaff;
    int speed;

public:
    typist(char *_code, char *_fname, char *_lname, int _speed)
    {
        speed = _speed;
        typingStaff.set_staff_details(_code, _fname, _lname);
    }
    void show_teacher_details(void)
    {
        typingStaff.show_staff_details();
        cout << "SPEED : " << speed << endl;
    }
};

class officer
{
    staff officeStaff;
    char grade;

public:
    officer(char *_code, char *_fname, char *_lname, char _grade)
    {
        grade = _grade;
        officeStaff.set_staff_details(_code, _fname, _lname);
    }
    void show_teacher_details(void)
    {
        officeStaff.show_staff_details();
        cout << "OFFICER GRADE : " << grade << endl;
    }
};

class regular : public typist
{
    char grade;

public:
    regular(char *_code, char *_fname, char *_lname, int _speed, char _grade) : typist(_code, _fname, _lname, _speed)
    {
        grade = _grade;
    }
    void display_regular_typist_details(void)
    {
        typingStaff.show_staff_details();
        cout << "SPEED : " << speed <<"wpm" << endl
             << "GRADE : " << grade << endl;
    }
};

class casual : public typist
{
    int wage;

public:
    casual(char *_code, char *_fname, char *_lname, int _speed, int _wage) : typist(_code, _fname, _lname, _speed){
        wage = _wage;
    }
    void display_casual_typist_details(void){
        typingStaff.show_staff_details();
        cout<<"SPEED : "<<speed<<" wpm"<<endl<<"DAILY WAGE : "<<wage<<endl;
    }
};

int main(void)
{
    casual C1 = casual("CS001","Fucker","Boy",45,450);
    C1.display_casual_typist_details();
    teacher T1 = teacher("TR001","Op","Dube","Sex Edu.");
    T1.show_teacher_details();
    return (0);
}