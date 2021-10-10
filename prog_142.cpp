#include<iostream>
using namespace std;
void test(int x) throw(int,char)
{
    if(x==1)
        throw(1);
    else if(x==0)
        throw('1');
    else
        throw(1.0);
    return;
}
int main(void)
{
    try 
    {
        test(0);
        test(1);
        test(-1);
    }
    catch(int)
    {
        cout<<"Exception:Integer value thrown."<<endl;
    }
    catch(char)
    {
        cout<<"Exception:Character value thrown."<<endl;
    }
    cout<<"End of programme.";
    return(0);
}