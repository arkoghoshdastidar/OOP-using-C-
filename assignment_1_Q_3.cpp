#include <iostream>
#include <iomanip>
using namespace std;

class tollBooth
{
    unsigned int totalCars;
    double totalCash;

public:
    tollBooth();
    void payingCar(void);
    void nopayCar(void);
    void display(void);
};

tollBooth::tollBooth()
{
    totalCars = 0;
    totalCash = 0;
}
void tollBooth::payingCar(void)
{
    totalCars++;
    totalCash += 0.5;
}
void tollBooth::nopayCar(void)
{
    totalCars++;
}
void tollBooth::display(void)
{
    cout << "Total cars passed : " << totalCars << " Total cash collected : " << totalCash << endl;
    exit(0);
}
int main(void)
{
    tollBooth TB;
    int x = 0;
    do
    {
        cout<<"Press 1 to add a paying car into tollBooth\nPress 2 to add a non-paying car into tollBooth\nPress 3 to display and exit\n";
        cin>>x;
        switch(x)
        {
            case 1 : TB.payingCar();break;
            case 2 : TB.nopayCar();break;
            case 3 : TB.display();break;
            default: cout<<"Wrong key entered try again or press -1 to exit";
        }
    } while (x != -1);
    return (0);
}