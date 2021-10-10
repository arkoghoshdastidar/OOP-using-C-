#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
// Ex. 7.1:-
class FLOAT 
{
    float number;
    public:
    FLOAT(){
        number=0;
    }
    FLOAT(float number){
        this->number=number;
    }
    void show(void){
        cout<<"Numerb = "<<number<<endl;
    }
    FLOAT operator+(FLOAT f){
        FLOAT temp;
        temp.number=number+f.number;
        return(temp);
    }
    FLOAT operator-(FLOAT f){
        FLOAT temp;
        temp.number=number-f.number;
        return(temp);
    }
    FLOAT operator*(FLOAT f){
        FLOAT temp;
        temp.number=number*f.number;
        return(temp);
    }
    FLOAT operator/(FLOAT f){
        FLOAT temp;
        temp.number=number/f.number;
        return(temp);
    }
};

int main(void)
{
    FLOAT f1,f2,f3;
    f1=FLOAT(12.32);
    f2=FLOAT(15.32);
    f3=f1+f2;
    f3.show();
    return(0);
}