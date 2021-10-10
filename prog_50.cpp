#include<iostream>
#include<iomanip>
using namespace std;

// using pointers to access class members

class data_1{
    int x;
    int y;
    public:
        void set(int x1,int y1){
            x = x1;
            y = y1;
        }
        friend int sumVal(data_1);
};

int sumVal(data_1 m){
    int data_1 :: *px = & data_1 :: x;
    int data_1 :: *py = & data_1 :: y;
    data_1 *objPtr = &m;
    int S = m.*px + objPtr->*py;
    return(S);
}

int main(void)
{
   data_1 m;
   m.set(23,23);
   cout << "SUM = "<<sumVal(m)<<endl; 
   return(0);
}                                           