#include<iostream>
#include<iomanip>
using namespace std;
// inline functions

inline int add(int a,int b){
    return(a+b);
}
inline int sub(int a,int b){
    return(a-b);
}
inline int mul(int a,int b){
    return(a*b);
}
inline int division(int a,int b){
    return(a/b);
}

int main(void)
{
   int a,b;
   char ch;
   cout <<"Enter two numbers :"<<endl;
   cin >>a>>b;
   cout<<"Enter the operator :"<<endl;
   cin>>ch;
   switch(ch) 
   {
       case '+': cout<<add(a,b);break;
       case '-': cout<<sub(a,b);break;
       case '*': cout<<mul(a,b);break;
       case '/': cout<<division(a,b);break;
   }
   return(0);
}