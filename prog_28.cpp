#include<iostream>
#include<iomanip>
using namespace std;

void readMatrix(int,int,int**);
void print(int,int,int**);

int main(void)
{
    int r,c,**matrix=NULL;
    cout<<"Enter the number of rows and columns : "<<endl;
    cin>>r>>c;
    matrix = new int*[r];
    for(int i=0;i<r;i++)
    matrix[i] = new int[c];
    readMatrix(r,c,matrix);
    print(r,c,matrix);
    return(0);
}

void readMatrix(int r,int c,int ** matrix)
{
    int x;
    cout<<"Press 0 for row major or 1 for column major"<<endl;
    cin>>x;
    if(x==0)
    {
        cout<<"Your matrix values will be stored in row major order."<<endl<<" Enter the values."<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            cin>>matrix[i][j];
        }
    }
    else
    {
        cout<<"Your matrix values will be stored in column major order."<<endl<<" Enter the values."<<endl;
        for(int j=0;j<c;j++)
        {
            for(int i=0;i<r;i++)
            cin>>matrix[i][j];
        }
    }
    return;
}

void print(int r,int c,int **matrix)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cout<<setw(3)<<matrix[i][j];
        cout<<endl;
    }
}