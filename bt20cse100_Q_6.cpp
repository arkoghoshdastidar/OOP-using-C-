#include <iostream>
#include <string>
using namespace std;
class time
{
    int hours, minutes, seconds;

public:
    time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    time(int hours, int minutes, int seconds)
    {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    void display(void)
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    time operator+(time t)
    {
        time t1;
        t1.hours=(((seconds+t.seconds)/60+minutes+t.minutes)/60+hours+t.hours);
        t1.minutes=((seconds+t.seconds)/60+minutes+t.minutes)%60;
        t1.seconds=(seconds+t.seconds)%60;
        return(t1);
    }
};
int main(void)
{
    time t1,t2,t3;
    t1=time();
    t2=time(6,23,49);
    t3=t1+t2;
    t3.display();
    return (0);
}