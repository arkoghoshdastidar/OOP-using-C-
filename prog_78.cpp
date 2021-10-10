#include<iostream>
#include<iomanip>
using namespace std;

// initialization list in C++

class alpha{
    protected:
    int a;
    void display_alpha(void);
    public:
        alpha(int _a):a(_a){}
};
void alpha :: display_alpha(void){
    cout << "alpha = " << a <<endl;
}

class beta{
    protected:
    int b;
    void display_beta(void);
    public:
        beta(int _b):b(_b){}
};
void beta :: display_beta(void){
    cout << " beta = "<<b<<endl;
}

class gamma : public alpha,public beta{
    int g;
    public:
        gamma(int _a,int _b,int _g):alpha(_a),beta(_b),g(_g){}
        void display_gamma(void);
};
void gamma :: display_gamma(void){
    display_alpha();
    display_beta();
    cout << "gamma = "<<g<<endl;
    return;
};

int main(void)
{
    gamma G(1,2,3);
    G.display_gamma();
    return(0);
}