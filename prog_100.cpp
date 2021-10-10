#include<iostream>
#include<iomanip>
using namespace std;
// overloading -> member to pointer operator
class test
{
    public:
        int data;
        test(int data){
            this->data=data;
        }
        test* operator->(void){
            return(this);
        }
};
int main(void)
{
   test T(2);
   cout<<(T->data)<<endl;
   return(0);
}