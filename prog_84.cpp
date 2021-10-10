#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
// pointer to array of objects

class item{
    int code;
    float price;
    public:
        item(){
            code = 0;
            price = 0;
        }
        void set_data(int,float);
        void display_data(void);
};

void item :: set_data(int code,float price){
    this->code = code;
    this->price = price;
    return;
}

void item :: display_data(void){
    cout << "CODE : "<<code<<endl<<fixed<<setprecision(2)<<"PRICE : "<<price<<endl;
}

int main(void)
{
    item *classPtr = new item[5];
    item *tempClassPtr = classPtr;
    int code,i;
    float price;
    for(i=0;i<5;i++)
    {
        cout<<"Enter the code and price of item number "<<(i+1)<<endl;
        cin>>code>>price;
        tempClassPtr->set_data(code,(float)price);
        tempClassPtr++;
    }
    while(classPtr<tempClassPtr)
    {
        for(i=0;i<5;i++)
        {
            cout<<"Details of item number "<<(i+1)<<endl;
            (*classPtr).display_data();
            classPtr++;
        }
    }
    return(0);
}