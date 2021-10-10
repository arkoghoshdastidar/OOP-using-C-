#include<iostream>
#include<iomanip>
using namespace std;
template<class T>
bool linearSearch(T *arr,int size,T val)
{
    for(int i=0;i<size;i++)
    {
        if(val==arr[i]){
            cout<<val<<" found in the array."<<endl;
            return(true);
        }
        else
            continue;
    }
    cout<<val<<" not found in the array."<<endl;
    return(false);
}
int main(void)
{
    int x[10]={1,2,7,98,54,15,48,7,6,10};
    int ret = linearSearch(x,10,4);
    ret = linearSearch(x,10,7);
    return(0);
}