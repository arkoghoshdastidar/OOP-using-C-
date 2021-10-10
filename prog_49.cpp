#include<iostream>
#include<iomanip>
using namespace std;

// friend classes

class complex;

class calculator{
    int real;
    int imaginary;
    public:
        void addComplex(complex,complex);
};

class complex{
    int real;
    int imaginary;
    public:
        void putData(int r,int i){
            real = r;
            imaginary = i;
        }
        friend class calculator;
};

void calculator :: addComplex(complex c1, complex c2){
    real = c1.real+c2.real;
    imaginary = c1.imaginary+c2.imaginary;
    cout << c1.real << " + " << c1.imaginary << "i + " << c2.real << " + " << c2.imaginary << "i = " << real << "+" << imaginary<<"i"<<endl;
}

int main(void)
{
   complex c1,c2;
   c1.putData(2,3);
   c2.putData(4,3);
   calculator calc;
   calc.addComplex(c1,c2); 
   return(0);
}