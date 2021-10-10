#include<iostream>
enum shape{circle,square,triangle};
using namespace std;
int main(void)
{
    int shapeId;
    cout << "Enter the shape id"<<endl;
    cin >> shapeId;
    while(shapeId>=circle && shapeId<=triangle){
        switch(shapeId){
            case 0: cout<< "Circle it is!"<<endl;
                    break;
            case 1: cout<< "Square it is!"<<endl;
                    break;
            case 2: cout<< "Triangle it is!"<<endl;
                    break;
            default: cout<< "No shape found!"<<endl;
        }
        cout<< "Do you want to continue? Y/N"<<endl;
        char condition;
        cin >> condition;
        if(condition=='Y'||condition =='y'){
            cout << "Please enter the shapeId again"<<endl;
            cin >>shapeId;
        }
        else if(condition=='N' || condition=='n'){
            cout << "Thank you for playing";
            break;      
        }
        else{
            cout << "Invalid entry"<<endl;
            break;
        }
    }
    return(0);
}