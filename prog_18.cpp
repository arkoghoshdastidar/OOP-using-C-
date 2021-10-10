#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
   int *arr = new int[10];
   int *arrPtr = arr;
   int *intPtr = arrPtr;
   cout << intPtr<<endl;
   cout <<"Enter the values of the array arr : "<<endl;
   for(int i=0;i<10;i++) 
   {
       cin>>*arrPtr;
       ++arrPtr;
   }
   cout <<arrPtr<<endl;
   cout <<"Length of array arr = (arrPtr - intPtr) = "<<(arrPtr-intPtr)<<endl;
   cout <<"Total memory used by array arr = ((int)arrPtr-(int)intPtr) = "<<((int)arrPtr-(int)intPtr)<<"bytes"<<endl;
   while(intPtr!=arrPtr)
   {
       cout<<setw(4)<<(*intPtr);
       ++intPtr;
   }
   return(0);
}