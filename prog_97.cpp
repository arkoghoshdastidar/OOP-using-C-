#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
// operator overloading using friend function

class vector
{
    int x,y,z;
    public:
        vector(){}
        vector(int x,int y,int z);
        friend void operator* (int a,vector & v);
        friend void operator* (vector &v,int a);
        friend ostream& operator << (ostream&,vector );
};
ostream& operator << (ostream& out,vector v){
    out<<v.x<<","<<v.y<<","<<v.z<<endl;
    return(out);
}
vector :: vector(int x,int y,int z){
    this->x=x;
    this->y=y;
    this->z=z;
}
void operator* (int a,vector &v){
    v.x*=a;
    v.y*=a;
    v.z*=a;
    return;
}
void operator* (vector &v,int a){
    v.x*=a;
    v.y*=a;
    v.z*=a;
    return;
}

int main(void)
{
    vector v1(2,5,3);
    cout<<v1<<endl;
    v1*2;
    cout<<v1<<endl;
    return(0);
}