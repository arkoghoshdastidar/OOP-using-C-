#include<iostream>
using namespace std;
void show(int x);
int main(void)
{
    int x;
    cin>>x;
    try{
        show(x);
    }
    catch(int){
        cout<<"Integer caught"<<endl;
    }
    catch(double){
        cout<<"Double caught"<<endl;
    }
    catch(char){
        cout<<"Character caught"<<endl;
    }
    catch(...){
        cout<<"Ellipse caught"<<endl;
    }
    return(0);
}
void show(int x){
    if(x==-1){
        throw 1;
    }
    else if(x==0){
        throw 1.0;
    }
    else if(x==1){
        throw '1';
    }
    else
        throw "string";
}