#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
using namespace std;
// overloading unary operator
class space
{
    int x,y,z;
    public:
        void getData(int,int,int);
        void displayData(void);
        void operator-(void);
};
void space :: getData(int x,int y,int z)
{
    this->x=x;
    this->y=y;
    this->z=z;
    return;
}
void space :: displayData(void)
{
    cout<<"x = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z<<endl;
    return;
}
void space :: operator-(void)
{
    this->x=-x;
    this->y=-y;
    this->z=-z;
    return;
}
int main(void)
{
    space S1;
    S1.getData(2,3,5);
    S1.displayData();
    -S1;
    S1.displayData();
    return(0);
}