#include<cmath>
#include<iostream>
#include<iomanip>
using namespace std;

class matrix{
    int m[3][3];
    public:
        void putData(void);
        void getData(void);
        friend matrix mulMatrix(matrix,matrix,matrix);
};

void matrix :: putData(void){
    cout << "Enter data of matrix"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> m[i][j];
        }
    }
}

void matrix :: getData(void){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << setw(8) << m[i][j];
        }
        cout<<endl;
    }
}

matrix mulMatrix(matrix m1,matrix m2,matrix m){
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m.m[i][j] = 0;
            for(int k=0;k<3;k++)
            {
                m.m[i][j]+=m1.m[i][k]*m2.m[k][j];
            }
        }
    }
    return(m);
}

int main(void)
{
    matrix m1,m2,m;
    m1.putData();
    m2.putData();
    m = mulMatrix(m1,m2,m);
    m.getData();
    return(0);
}