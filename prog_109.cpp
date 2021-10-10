#include<iostream>
#include<iomanip>
using namespace std;
// Bubble sort using function templates
template<class T>
void bubbleSort(T &arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    return;
}
template<class T>
void _swap(T &x,T &y)
{
    T temp = x;
    x = y;
    y = temp;
    return;
}
int main(void)
{
    int x[5]={4,2,5,-1,6};
    float y[5]={4.5,5.1,-1.5,0.45,2.35};
    bubbleSort(x,5);
    bubbleSort(y,5);
    for(int i=0;i<5;i++)        
        cout<<x[i]<<"\t";
    cout<<endl;
    for(int i=0;i<5;i++)
        cout<<y[i]<<"\t";
    cout<<endl;
    return(0);
}