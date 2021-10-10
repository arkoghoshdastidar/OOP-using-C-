#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
    cout <<"Initialising two_d_array using new..."<<endl;
    cout <<"Enter the number of rows and columns for the required matrix"<<endl;
    int r,c;
    cin >>r>>c;
    int **two_d_array = new int*[r];
    for(int i=0;i<r;i++)
    {
        two_d_array[i] = new int[c];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout <<"Enter the value for two_d_array["<<i<<"]["<<j<<"]"<<endl;
            cin >>two_d_array[i][j];
        }
    }
    cout<<"Displaying the two_d_array..."<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<setw(3)<<two_d_array[i][j];
        }
        cout<<endl;
    }
    return(0);
}