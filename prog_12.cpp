#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(void)
{
   int size = 0;
   float SD,mean=0,variance=0;
   cout << "Enter the number of records : ";
   cin >> size;
   cout <<endl<<"Enter the values in the record : "<<endl;
   int * arr = new int[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
        mean+=arr[i];
    }
    mean = mean/size;
    for(int i=0;i<size;i++){
        variance+=(arr[i]-mean)*(arr[i]-mean);
    }
    variance = (variance/size);
    SD = sqrt(variance);
    cout << "MEAN = "<<mean<<endl<<"VARIANCE = "<<variance<<endl<<"STANDARD DEVIATION = "<<SD<<endl;
   return(0);
}