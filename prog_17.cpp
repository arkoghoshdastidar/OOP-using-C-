#include<iostream>
#include<iomanip>
using namespace std;

void inc_10(int *ptr){
    *ptr+=10;
}

int main(void)
{
   int a = 10;
   cout <<"Before : "<<a<<endl;
   inc_10(&a);
   cout <<"After : "<<a<<endl; 
   return(0);
}