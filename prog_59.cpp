#include<iostream>
#include<iomanip>
using namespace std;

// creating parameterized constructor

class point{
    float x,y;
    public:
        point(void){
            x=0;
            y=0;
        }
        point(float i,float j){
            x = i;
            y = j;
        }
        void display(void){
            cout <<"("<<x<<","<<y<<")"<<endl;
        }
};

int main(void)
{
    point p1(2.23,5.27);
    point p2=point(1.20,2.32);
    point p3;
    p1.display();
    p2.display();
    p3.display();
    return(0);
}