#include <iostream>
#include <iomanip>
#include <cstring>
#include <list>
using namespace std;
class student
{
public:
    char *first_name;
    int roll_number;
    void set(char *first_name, int roll_number)
    {
        this->first_name = new char(strlen(first_name) + 1);
        strcpy(this->first_name, first_name);
        this->roll_number = roll_number;
    }
    void get(void)
    {
        cout << "First_name : " << first_name << " Roll_number : " << roll_number << endl;
    }
};
int main(void)
{
    list<student> phone_lit(5);
    list<student>::iterator iter = phone_lit.begin();
    char name[30];
    int roll,x=0;
    while (iter != phone_lit.end())
    {
        cout << "Enter the first name : ";
        cin >> name;
        cout << endl
             << "Enter the roll number : ";
        cin >> roll;
        cout << endl;
        iter->set(name, roll);
        iter++;
    }
    do
    {
        cout << "Enter 0 to search by name/Enter 1 to search by roll number" << endl;
        int condition;
        cin >> condition;
        iter = phone_lit.begin();
        if (condition == 0)
        {
            cin >> name;
            while (iter != phone_lit.end())
            {
                if (!strcmp(iter->first_name,name))
                {
                    iter->get();
                    break;
                }
                iter++;
            }
        }
        else
        {
            iter = phone_lit.begin();
            cin >> roll;
            while (iter != phone_lit.end())
            {
                if (iter->roll_number == roll)
                {
                    iter->get();
                    break;
                }
                iter++;
            }
        }
        cout<<"Press -1 to terminate searching : ";
        cin>>x;
        cout<<endl;
    } while (x != -1);
    return (0);
}