#include<iostream>
#include<iomanip>
using namespace std;

// creating multiple constructor in a class

class complex{
    int x,y;
    public:
        complex(void){
            x=0;
            y=0;
        }
        complex(int i,int j){
            x=i;
            y=j;
        }
        complex(int i){
            x=y=i;
        }
        void display(void){
            cout <<x<<" + "<<y<<"i"<<endl;
        }
        friend complex sum(complex,complex);
};

complex sum(complex c1,complex c2){
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return(c3);
}

int main(void)
{
    complex c1(5);
    complex c2(2,3);
    complex c3;
    cout<<"Before adding\n";
    c1.display();
    c2.display();
    c3.display();
    c3 = sum(c1,c2);
    cout<<"After adding\n";
    c1.display(); 
    c2.display(); 
    c3.display(); 
    return(0);
}