#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class person
{
protected:
    char *firstname;
    char *lastname;
    char *code;
    void display_person_details(void);

public:
    person(char *fname, char *lname, char *_code)
    {
        firstname = new char[strlen(fname) + 1];
        strcpy(firstname, fname);
        lastname = new char[strlen(lname) + 1];
        strcpy(lastname, lname);
        code = new char[strlen(_code) + 1];
        strcpy(code, _code);
    }
};
void person ::display_person_details(void)
{
    cout << "NAME : " << firstname << " " << lastname << endl
         << "CODE : " << code << endl;
}

class account : public virtual person
{
protected:
    int pay;
    void display_account_details(void);

public:
    account(char *fname, char *lname, char *_code, int _pay) : person(fname, lname, _code)
    {
        pay = _pay;
    }
};
void account ::display_account_details()
{
    cout << "PAY : " << pay << endl;
}

class admin : public virtual person
{
protected:
    char *experience;
    void display_admin_details(void)
    {
        cout << "EXPERIENCE : " << experience << endl;
    }

public:
    admin(char *fname, char *lname, char *code, char *_experience) : person(fname, lname, code)
    {
        experience = new char[strlen(_experience) + 1];
        strcpy(experience, _experience);
    }
};

class master : public account, public admin
{
public:
    master(char *fname, char *lname, char *_code, int _pay, char *_experience) : person(fname, lname, _code), account(fname, lname, _code, _pay), admin(fname, lname, _code, _experience)
    {
    }
    void display_master_details(void)
    {
        display_person_details();
        display_account_details();
        display_admin_details();
    }
};

int main(void)
{
    master M1("kailash", "dhakar", "KD", 800000, "13yrs");
    M1.display_master_details();
    return (0);
}