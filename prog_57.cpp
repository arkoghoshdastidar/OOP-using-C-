#include<iostream>
#include<iomanip>
using namespace std;

class DM;
class DB;

class DM{
    float metre;
    float centimeter;
    public:
        void putData(float m,float c){
            metre = m;
            centimeter = c;
        }
        void getData(void){
            cout << "Distance = "<<metre<<"m "<<centimeter<<"cm"<<endl;
        }
        friend DM add(DM,DB);
};

class DB{
    float feet;
    float inche;
    public:
        void putData(float m,float c){
            feet = m;
            inche = c;
        }
        void getData(void){
            cout << "Distance = "<<feet<<"'"<<inche<<"\""<<endl;
        }
        friend DM add(DM,DB);
};

DM add(DM m1,DB m2){
    DM m;
    float extra;
    m.metre = m1.metre + (m2.feet)*0.3;
    m.centimeter = m1.centimeter + (m2.inche)*2.5;
    if(m.centimeter>=100)
    {
        int _metre = m.centimeter/100;
        m.metre = m.metre + _metre;
        float _centimeter = m.centimeter -100*_metre;
        m.centimeter = _centimeter;
    }
    return(m);
}

int main(void)
{ 
   DM m1,m;
   DB m2;
   m1.putData(1,23);
   m1.getData();
   m2.putData(5,10);
   m2.getData();
   m = add(m1,m2);
   m.getData(); 
   return(0);
}