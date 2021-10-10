#include<iostream>
#include<string>
using namespace std;
void print_pattern(string s)
{
    int size=s.size();
    for(int i=0;i<int(size/2)+1;i++)
    {
        int temp=i+1;
        for(int k=0;k<int(size/2)-i;k++)
            cout<<" ";
        for(int x=0;x<i;x++)
            cout<<(temp++);
        cout<<temp;
        for(int a=0;a<i;a++)
            cout<<(--temp);
        cout<<endl;
    }
    return;
}
int main(void)
{
    string s9("123456789");
    string s7("1234567");
    string s5("12345");
    string s3("123");
    string s1("1");
    print_pattern(s9);
    print_pattern(s7);
    print_pattern(s5);
    print_pattern(s3);
    print_pattern(s1);
   return(0);
}