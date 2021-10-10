#include <iostream>
#include <iomanip>
#include<cstring>
using namespace std;

// Exercise 8.3 and 8.4 :-

class staff
{
protected:
    char codeName[9];

public:
    staff(void);
};
staff ::staff(void)
{
    cout << "Enter the staff code number : ";
    cin >> codeName;
    cout << endl;
    return;
}

class education
{
protected:
    char *highestQualification;
    char *professionalQualification;

public:
    education(char *HQ, char *PQ)
    {
        highestQualification = new char[strlen(HQ) + 1];
        strcpy(highestQualification, HQ);
        professionalQualification = new char[strlen(PQ) + 1];
        strcpy(professionalQualification, PQ);
    }
    void display_qualification(void)
    {
        cout << "Highest Qualification : " << highestQualification << endl;
        cout << "Highest Professional Qualification : " << professionalQualification << endl;
        return;
    }
};

class teacher : public staff,public education
{
private:
    char subject[50];

public:
    teacher(char * HQ,char *PQ) : staff(),education(HQ,PQ)
    {
        cout << "Enter the subject publication of the teacher :";
        cin >> subject;
        cout << endl;
    }
    void display_details(void)
    {
        cout << "Teacher code number : " << codeName << endl;
        display_qualification();
        cout << "Subject publication : " << subject << endl;
        return;
    }
};

class officer : public staff,public education
{
private:
    char grade;

public:
    officer(char * HQ,char *PQ) : staff(),education(HQ,PQ)
    {
        cout << "Enter the grader of officer : ";
        cin >> grade;
        cout << endl;
    }
    void display_details(void)
    {
        cout << "Officer code number : " << codeName << endl;
        display_qualification();
        cout << "Officer grade : " << grade << endl;
    }
};

class typist : public staff
{
protected:
    int speed;

public:
    typist() : staff()
    {
        cout << "Enter the speed in wpm : ";
        cin >> speed;
        cout << endl;
    }
};

class regular : public typist
{
    char section;

public:
    regular() : typist()
    {
        cout << "Enter the section of typist : ";
        cin >> section;
        cout << endl;
    }
    void display_details(void)
    {
        cout << "Typist code number : " << codeName << endl;
        cout << "Speed of the typist : " << speed << endl;
        cout << "Type of typist : regular" << endl;
        cout << "Section of typist : " << section << endl;
    }
};

class casual : public typist
{
    int dailyWage;

public:
    casual() : typist()
    {
        cout << "Enter the daily wage of the typist : ";
        cin >> dailyWage;
        cout << endl;
    }

    void display_details(void)
    {
        cout << "Typist code number : " << codeName << endl;
        cout << "Speed of the typist : " << speed << endl;
        cout << "Daily wage of the typist : " << dailyWage << endl;
    }
};

int main(void)
{
    teacher KD("B.Tech","HOD at Resonance Kota");
    regular TR;
    casual TC;
    officer AGD("B.Tech","SDE at Google");
    KD.display_details();
    TR.display_details();
    TC.display_details();
    AGD.display_details();
    return (0);
}