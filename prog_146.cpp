#include <iostream>
using namespace std;

int main(void)
{
    try
    {
        int x;
        cin>>x;
        try
        {
            if (x == 0)
                throw(0);
        }
        catch (int)
        {
            cout << "Exception:Caught" << endl;
            throw(0);
        }
    }
    catch(int)
    {
        cout << "Exception:Caught the re-thrown exception" << endl;
    }
    cout<<"End of programme"<<endl;
    return (0);
}