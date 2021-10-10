#include<iostream>
#include<iomanip>
using namespace std;

// introduction to static function 

class item{
    int id;
    int code;
    static int counter;
    public:
        void setData(int c){
            id = c;
            counter++;
            code = counter;
        }
        void displayData(void){
            cout<<"id : "<<id<<" code : "<<code<<endl;
        }
        static void count(void);
};

int item::counter=0;
void item::count(void){
    cout<<"Total items = "<<counter<<endl;
};

int main(void)
{ 
   item x,y,z;
   x.setData(10);
   x.displayData();
   y.setData(20);
   y.displayData();
   z.setData(30);
   z.displayData();
   item :: count(); 
   return(0);
}