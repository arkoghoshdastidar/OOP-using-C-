#include<iostream>
#include<string>
using namespace std;
int count_char_in_string(string s,char ch)
{
    int count=0,found=0;
    while(found!=-1)
    {
        found=s.find(ch,found);
        if(found!=-1)
        {
            found++;
            count++;
        }
        else
            break;
    }
    return(count);
}
int main(void)
{
    string s("lorem ipsum dolche vita!!");
    int count = count_char_in_string(s,'e');
    cout<<count<<endl;
    return(0);
}