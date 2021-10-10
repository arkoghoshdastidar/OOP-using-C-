#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
   int i,j,n;
   cout << "Enter the number to be printed in the last row"<<endl;
   cin >> n;
   for(i=1;i<=n;i++){
       for(j=1;j<=i;j++){
           cout <<i<<" ";
       }
       cout <<endl;
   }
   return(0);
}