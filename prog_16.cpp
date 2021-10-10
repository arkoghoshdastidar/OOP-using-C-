#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
   int a = 10;
   int *ptr, **dbptr;
   ptr = &a;
   dbptr = &ptr;
   cout<<"Adddress of a = "<<&a<<endl<<"Value stored by ptr = "<<ptr<<endl<<"Address of ptr = "<<&ptr<<endl<<"Value stored by dbptr = "<<dbptr<<endl<<"Value stored by a = "<<a<<endl<<"Value stored by a = *ptr = **dbptr = "<<*ptr<<endl;
   return(0);
}