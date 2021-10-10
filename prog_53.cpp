#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class data_1{
    float P,R;
    public:
        void setValue(float p,float r){
            P = p;
            R = r/100;
        }
        float calculateSI(void);
        float calculateCI(void);
};

float data_1 :: calculateSI(void){
    cout << "Enter the duration in years : "<<endl;
    int t;
    cin >> t;
    return(P*(1+R*t));
}

float data_1 :: calculateCI(void){
    int n,t;
    cout << "Enter the number of times interest is compounded and duration in years "<<endl;
    cin >> n >> t;
    float CI = P*pow((1+R/n),n*t);
    return (CI);
}

int main(void)
{  
   data_1 x;
   x.setValue(1000,20);
   cout << "SI = " <<x.calculateSI() <<endl;
   cout << "CI = " << x.calculateCI() <<endl; 
   return(0);
}