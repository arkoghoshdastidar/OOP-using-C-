#include<iostream>
#include<iomanip>
using namespace std;

// Introduction to destructors

class code{
    static int counter;
    int data_1;
    public:
        code(){}
        code(int x){
            counter++;
            data_1 = x;
            cout << "Msg : Constructing class code "<<counter<<" with data_1 = "<<data_1<<endl;
        }
        ~code(){
            cout << "Msg : Destructing class code "<<counter<<" with data_1 = "<<data_1<<endl;
            counter--;
        }
};
int code :: counter = 0;
int main(void)
{
   cout << "Inside the main function \n"; 
   code c1(2); 
   {
       cout << "Inside the block inside the main funciton \n";
       code c2(3);
   }
   return(0);
}