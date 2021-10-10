#include<iostream>
#include<iomanip>
using namespace std;

// introduction to static data member 

class item{
    int data;
    int id;
    static int counter;
    public:
    void putData(int a){
        data = a;
        id = ++counter;
    }
    void getData(void){
        cout << "data : "<<data<<" id : "<<id<<endl;
    }
    static void count(void);
};

int item :: counter = 0;

void item :: count(void){
    cout << "count : "<<counter<<endl;
}

int main(void)
{ 
   item x,y,z;
   x.putData(100);
   x.getData(); 
   y.putData(200);
   y.getData();
   z.putData(300);
   z.getData();
   item :: count();
   return(0);
}