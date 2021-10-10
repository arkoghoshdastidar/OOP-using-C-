#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// Exercise 9.1 :-
class base
{
protected:
    double x, y;

public:
    virtual void get_data(void){
        cout << "Msg:get_data(void) running inside the base class" << endl;
    }
    virtual void display_area(void){
        cout << "Msg:display_area(void) running inside the base class" << endl;
    }
};
class triangle : public base
{
public:
    void get_data(void);
    void display_area(void);
};
void triangle ::get_data(void)
{
    cout << "Input the base and height of the triangle : " << endl;
    cin >> x >> y;
}
void triangle ::display_area(void)
{
    cout << "Area of triangle = " << (0.5 * x * y) << endl;
}

class rectangle : public base
{
public:
    void get_data(void);
    void display_area(void);
};
void rectangle ::get_data(void)
{
    cout << "Input the length and breadth of the rectangle : " << endl;
    cin >> x >> y;
}
void rectangle ::display_area(void)
{
    cout << "Area of rectangle = " << (x * y) << endl;
}

class circle : public base
{
    public:
        void get_data(void);
        void display_area(void);
};
void circle :: get_data(void)
{
    cout << "Input the radius of the circle : " << endl;
    cin >> x;
    y = 1;
}
void circle :: display_area(void)
{
    cout << "Area of the circle = " << (3.14*x*x*y) << endl;
}

int main(void)
{
    base *tPtr, *rPtr, *cPtr;
    rectangle r1;
    triangle t1;
    circle c1;
    cPtr = &c1;
    tPtr = &t1;
    rPtr = &r1;
    tPtr->get_data();
    rPtr->get_data();
    cPtr->get_data();
    tPtr->display_area();
    rPtr->display_area();
    cPtr->display_area();
    return (0);
}