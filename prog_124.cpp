#include <iostream>
#include <string>
using namespace std;
// manipulating string objects.
int main(void)
{
    string s1("12345");
    string s2("abcde");
    cout << "Initial value of s1 : " << s1 << endl;
    cout << "Initial value of s2 : " << s2 << endl;
    /*
        *************-----------------------------------------------******************
                      string_object.insert() member function syntax
                        ->s1.insert(int s1_pos,string s2)
                        ->s1.insert(int s1_pos,string s2,s2_pos,int s2_len)
                        ->s1.insert(int s1_pos,char*ch)
                        ->s1.insert(int s1_pos,char* ch,int ch_len)
                        ->s1.insert(string::iterator s1_iter,string::iterator s2_first_iter,string::iterators2_last_iterator)
        *************-----------------------------------------------******************
    */
    cout<<"string_object.insert():-"<<endl;
    string s3(s1);
    cout<<"Initial value of s3=s1 : "<<s3<<endl;
    s3.insert(0,s2);
    cout<<"s3.insert(0,s2) : "<<s3<<endl;
    s3=s1;
    s3.insert(1,s2,0,2);
    cout<<"s3=s1 => s3.insert(1,s2,0,2) : "<<s3<<endl;
    char ch[5]="arko";
    s3=s1;
    s3.insert(2,ch,4);
    cout<<"s3=s1 => s3.insert(2,ch,4) : "<<s3<<endl;
    /*
        *************---------------------------------------------******************
                    string_object.replace() member function syntax
                    ->s1.replace(int s1_pos,int s1_len,string s2)
                    ->s1.replace(int s1_pos,int s1_len,string s2,int s2_pos,int s2_len)
                    ->s1.replace(int s1_pos,int s1_len,char* ch)
                    ->s1.replace(int s1_pos,int s1_len,char* ch,int ch_len) 
        *************----------------------------------------------******************
    */
    cout<<"string_object.replace() :-"<<endl;
    s3=s1;
    s3.replace(0,2,s2);
    cout<<"s3=s1 => s3.replace(0,2,s2) : "<<s3<<endl;
    s3=s1;
    s3.replace(0,2,s2,1,2);
    cout<<"s3=s1 => s3.replace(0,2,s2,1,2) : "<<s3<<endl;
    s3=s1;
    s3.replace(0,4,ch);
    cout<<s3<<endl;
    s3=s1;
    s3.replace(1,3,ch,2);
    cout<<s3<<endl;
    /*
        *************---------------------------------------------******************
                    string_object.erase() member function syntax
                    ->s1.erase(int s1_pos,int s1_len)
                    ->s1.erase(string::iterator first,string::iterator last)
        *************----------------------------------------------******************
    */
    cout<<"string_object.erase() :-"<<endl;
    s3=s1;
    s3.erase(0,2);
    cout<<s3<<endl;
    s3=s1;
    s3.erase(s3.begin(),s3.begin()+2);
    cout<<s3<<endl;
    /*
        *************---------------------------------------------******************
                    string_object.append() member function syntax
                    ->s1.append(string s2)
                    ->s1.append(string s2,int s2_start,s2_len)
                    ->s1.append(char* ch)
                    ->s1.append(char* ch,int len) 
                    ->s1.append(int n,char ch)
        *************----------------------------------------------******************
    */
    cout<<"string_object.append() :-"<<endl;
    s3=s1;
    s3.append(s2);
    cout<<s3<<endl;
    s3=s1;
    s3.append(s2,1,2);
    cout<<s3<<endl;
    s3=s1;
    s3.append("arko");
    cout<<s3<<endl;
    s3=s1;
    s3.append("arko",3,1);
    cout<<s3<<endl;
    s3=s1;
    s3.append(10,'.');
    cout<<s3<<endl;
    s3=s1;
    return (0);
}