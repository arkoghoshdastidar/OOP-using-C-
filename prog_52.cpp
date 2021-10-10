#include<iostream>
#include<iomanip>
using namespace std;

class vector{
    float x;
    float y;
    float z;
    public:
        void create(float xi,float yi,float zi){
            x = xi;
            y = yi;
            z = zi;
        }
        void modify(void);
        void multiply(float factor){
            x =factor*x;
            y =factor*y;
            z =factor*z;
        }
        void display(void){
            cout <<x<<"i + "<<y<<"j + "<<z<<"k"<<endl;
        }
};

void vector :: modify(void){
    char i;
    cout << "Which co-ordinate(x,y,z) do you want to modify?"<<endl;
    cin >> i;
    switch(i)
    {
        case 'x':
            float xi;
            cout << "Enter the new x co-ordinate : ";
            cin >> xi;
            x = xi;
            cout << endl;
            break;
        case 'y':
            float yi;
            cout << "Enter the new y co-ordinate : ";
            cin >> yi;
            y = yi;
            cout << endl;
            break;
        case 'z':
            float zi;
            cout << "Enter the new z co-ordinate : ";
            cin >> zi;
            z = zi;
            cout << endl;
            break;
        default:
            cout << "Invalid axis" <<endl;
            break;
    }
}

int main(void)
{
   vector v1;
   v1.create(1,2,3);
   v1.display();
   v1.modify();
   v1.display();
   v1.multiply(2);
   v1.display(); 
   return(0);
}