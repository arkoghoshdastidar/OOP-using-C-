#include <iostream>
#include <iomanip>
using namespace std;
// Ex 7.3:-
class MAT
{
    int m, n, **arr;

public:
    MAT() {}
    MAT(int m, int n);
    void initialize(int, int, int);
    void show(void);
    friend MAT operator+(MAT, MAT);
    friend MAT operator-(MAT, MAT);
    friend MAT operator*(MAT, MAT);
    friend MAT operator*(int, MAT);
    friend MAT operator*(MAT, int);
    ~MAT();
};
void MAT :: show(void)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j];
        cout<<endl;
    }
}
void MAT::initialize(int i, int j, int val)
{
    arr[i][j] = val;
    return;
}
MAT ::MAT(int m, int n)
{
        this->m = m;
        this->n = n;cout<<"m="<<n<<" n="<<n<<endl;
        arr = new int *[m];
        for (int i = 0; i < m; i++)
            arr[m] = new int[n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = 0;
                cout<<"i="<<i<<" j= "<<j<<" "<<arr[i][j]<<endl;
            }
        }
        return;
    
}
MAT operator+(MAT m1, MAT m2)
{
    MAT m0(m1.m, m1.n);
    for (int i = 0; i < m1.m; i++)
    {
        for (int j = 0; j < m1.n; j++)
            m0.arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
    }
    return (m0);
}
MAT operator-(MAT m1, MAT m2)
{
    MAT m0(m1.m, m1.n);
    for (int i = 0; i < m1.m; i++)
    {
        for (int j = 0; j < m1.n; j++)
            m0.arr[i][j] = m1.arr[i][j] - m2.arr[i][j];
    }
    return (m0);
}
MAT operator*(int a, MAT m1)
{
    MAT m0(m1.m, m1.n);
    for (int i = 0; i < m1.m; i++)
    {
        for (int j = 0; j < m1.n; j++)
            m0.arr[i][j] = a * m1.arr[i][j];
    }
    return (m0);
}
MAT operator*(MAT m1, int a)
{
    MAT m0(m1.m, m1.n);
    for (int i = 0; i < m1.m; i++)
    {
        for (int j = 0; j < m1.n; j++)
            m0.arr[i][j] = a * m1.arr[i][j];
    }
    return (m0);
}
MAT operator*(MAT m1, MAT m2)
{
    if (m1.n != m2.m)
    {
        cout << "Cannot multiply" << endl;
        exit(0);
    }
    MAT m0(m1.m, m2.n);
    for (int i = 0; i < m1.m; i++)
    {
        for (int j = 0; j < m2.n; j++)
        {
            for (int k = 0; k < m1.n; k++)
                m0.arr[i][j] += m1.arr[i][k] * m2.arr[k][j];
        }
    }
    return (m0);
}
MAT ::~MAT()
{
    delete[] arr;
}
int main(void)
{
    MAT m1(3,3);
    MAT m2(3,3);
    MAT m3;
    cout<<"hello";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the values of m1.arr[" << i << "][" << j << "] and m2.arr[" << i << "][" << j << "] respectively" << endl;
            int temp1,temp2;
            cin>>temp1>>temp2;
            m1.initialize(i,j,temp1);
            m2.initialize(i,j,temp2);
        }
    }
    m1.show();
    m2.show();
    m3=m1+m2;
    m3.show();
    m3=m1-m2;
    m3.show();
    m3=m1*m2;
    m3.show();
    m3=2*m1;
    m3.show();
    m3=m2*3;
    m3.show();
    return (0);
}