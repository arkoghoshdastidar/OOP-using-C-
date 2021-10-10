#include<iostream>
#include<iomanip>
using namespace std;

// passing two different classes in a function

class class_2; // forward declaration

class class_1{
    int data;
    public:
        void putData(int a){data = a;}
        void getData(void){cout << "data : "<< data<<endl;}
        friend void add(class_1,class_2);
};

class class_2{
    int data;
    public:
        void putData(int a){data = a;};
        void getData(void){cout << "data : "<< data<<endl;};
        friend void add(class_1,class_2);
};

void add(class_1 c1, class_2 c2)
{
    cout << "sum = "<<c1.data+c2.data<<endl;
}

int main(void)
{ 
   class_1 c1;
   class_2 c2;
   c1.putData(10);
   c2.putData(20);
   add(c1,c2); 
   return(0);
}