#include<iostream>
#include<iomanip>
using namespace std;

class item{
    private:
        int number;
        float cost;
    public:
        void putData(int a,int b);
        void getData(void);
};

void item :: putData(int a,int b)
{
    number = a;
    cost = b;
}

void item :: getData(void)
{
    cout<<"number : "<<number<<endl;
    cout<<"cost : "<<cost<<endl;
}

int main(void)
{
   item x;
   x.putData(10,39.34);
   x.getData(); 
   return(0);
}