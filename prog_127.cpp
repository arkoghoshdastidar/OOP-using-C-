#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
// Accessing string elements.
int main(void)
{
    /*
    *********************************************************************************************
                                Character access member functions
                                ->sting_object.at(int index)
                                ->find_first_of (const string& str, size_t pos = 0)
                                ->find_first_of (const char* s, size_t pos = 0)
                                ->find_first_of (const char* s, size_t pos, size_t n)
                                ->find_first_of (char c, size_t pos = 0)
                                ->find_last_of (const string& str, size_t pos = 0)
                                ->find_last_of (const char* s, size_t pos = 0)
                                ->find_last_of (const char* s, size_t pos, size_t n)
                                ->find_last_of (char c, size_t pos = 0)
                                ->string_object.find(string str)
                                ->string_object.find(string str,int str_pos1)
                                ->string_object.find(char* ch)
                                ->string_object.find(char* ch,int ch_pos,int ch_len)
    *********************************************************************************************
    */
    string s("The colour of an apple is red.");
    for(int i=0;i<s.size();i++)
        cout<<(s.at(i));
    cout<<endl;
    int i = s.find("red");
    cout<<i<<endl;
    i=s.find_first_of("arko");
    cout<<i<<endl;
    i=s.find_last_of("red");
    cout<<i<<endl;
    return(0);
}