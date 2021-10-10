#include<iostream>
using namespace std;
void test(int x)
{
    if(x==0)
        throw(0);
    else if(x==1)
        throw(1.0);
    else if(x==-1)
        throw('1');
    else
        throw("string");
}
int main(void)
{
    try 
    {
        test(4);
    }
    catch(int){
        cout<<"Exception:Integer value caught."<<endl;
    }
    catch(double){
        cout<<"Exception:Double value caught."<<endl;
    }
    catch(char){
        cout<<"Exception:Character value caught."<<endl;
    }
    catch(...){
        cout<<"Exception:String value caught."<<endl;
    }
    cout<<"End of programme."<<endl;
    return(0);
}