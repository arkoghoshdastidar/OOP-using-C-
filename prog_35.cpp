#include<iostream>
#include<iomanip>
using namespace std;

class item{
    private:
        int code[100];
        float price[100];
        int counter;
    public:
        void inizCounter(void){
            counter = 0;
        };
        void getData(void);
        void displayData(void);
        void displaySum(void);
};

void item :: getData(void)
{
    cout << "Enter the code : "<<endl;
    cin >> code[counter];
    cout << "Enter the price : "<<endl;
    cin >> price[counter];
    counter++;
}

void item :: displayData(void)
{
    cout << "CODE  PRICE"<<endl;
    for(int i=0;i<counter;i++)
    {
        cout << code[i] <<"  " << price[i]<<endl;
    }
}

void item :: displaySum(void)
{
    float sum = 0;
    for(int i=0;i<counter ;i++)
        sum+=price[i];
    cout << "SUM = "<<sum<<endl;
}

int main(void)
{   
   item list;
   list.inizCounter();
   int condition;
    cout<< "-1:Break\n1:GetData\n2:DisplayData\n3:DisplaySum\n"<<endl;
   do
   {
       cout<<"Enter the condition"<<endl;
       cin>>condition;
       switch(condition)
       {
           case(-1):
                cout<<"Thank you :)";
                exit(0);
           case(1):
                list.getData();
                break;
           case(2):
                list.displayData();
                break;
           case(3):
                list.displaySum();
                break;
       }

   } while (condition != -1);
     
   return(0);
}