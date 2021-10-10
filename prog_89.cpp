#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
// Using virtual function for run time polymorphism

class media
{
protected:
    char name[50];
    float price;

public:
    media()
    {
        cout << "Enter the name : " << endl;
        cin >> name;
        cout << "Enter the price : " << endl;
        cin >> price;
    }
    virtual void display() = 0;
};

class book : public media
{
    int pages;

public:
    book() : media()
    {
        cout << "Enter the number of pages : " << endl;
        cin >> pages;
    }
    void display(void);
};
void book ::display(void)
{
    cout << "NAME : " << name << endl
         << "PRICE : " << price << endl
         << "PAGES : " << pages << endl <<endl;
}

class video : public media
{
    float length;

public:
    video() : media()
    {
        cout << "Enter the length of video in minutes : " << endl;
        cin >> length;
    }
    void display(void);
};
void video :: display(void)
{
     cout << "NAME : " << name << endl
         << "PRICE : " << price << endl
         << "VIDEO LENGTH : " << length << endl << endl;
}

int main(void)
{
    media *bookPtr, *videoPtr;
    book B1;
    video V1;
    bookPtr = &B1;
    videoPtr = &V1;
    bookPtr->display();
    videoPtr->display();
    return (0);
}