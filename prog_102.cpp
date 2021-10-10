#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
using namespace std;
class polar{
    float radius,angle;
    public:
        polar(){
            radius=0;
            angle=0;
        }
        polar(float radius,float angle){
            this->radius=radius;
            this->angle=angle;
        }
        void show(void){
            cout<<"|r|="<<radius<<" a="<<angle<<endl;
            return;
        }
        polar operator+ (polar p){
            polar temp;
            float x,y;
            x=p.radius*cos(p.angle)+radius*cos(angle);
            y=p.radius*sin(p.angle)+radius*sin(angle);
            temp.angle=(x/y);
            temp.radius=sqrt(x*x+y*y);
            return(temp);
        }
};
int main(void)
{
    polar p1,p2,p3;
    p1=polar(4,0.21);
    p2=polar(5,0.32);
    p3=p1+p2;
    p1.show();
    p2.show();
    p3.show();
    return(0);
}