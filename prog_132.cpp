#include<iostream>
#include<string>
using namespace std;
int count_string(string s,string ch)
{
    int found=0,count=0;
    while(found!=-1)
    {
        found=s.find(ch,found);
        if(found!=-1)
        {
            count++;
            found++;
        }
    }
    return(count);
}
int main(void)
{
    string s("It is new. It is singular.It is simple.It must succeed!");
    int count = count_string(s,"It");
    cout<<count<<endl;
    return(0);
}