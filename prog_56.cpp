#include<iostream>
#include<iomanip>
using namespace std;

class vector{
    float x,y,z;
    public:
        void putData(float xi,float yj,float zk){
            x=xi;
            y=yj;
            z=zk;
        }
        void getData(void){
            cout <<x<<"i + "<<y<<"j + "<<z<<"k"<<endl;
        }
        friend vector add(vector,vector);
};

vector add(vector v1,vector v2){
    vector v;
    v.x = v1.x+v2.x;
    v.y = v1.y+v2.y;
    v.z = v1.z+v2.z;
    return(v);
}

int main(void)
{
   vector v1,v2,v;
   v1.putData(1,2,3);
   v2.putData(1,2,3);
   v = add(v1,v2);
   v.getData(); 
   return(0);
}