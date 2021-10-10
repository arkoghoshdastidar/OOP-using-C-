#include<iostream>
#include<iomanip>
#include<list>
using namespace std;
// introduction to list
void display(list<int> l)
{
    list<int> :: iterator itr = l.begin();
    while(itr!=l.end())
    {
        cout<<fixed<<setprecision(3)<<*(itr)<<" ";
        itr++;
    }
    cout<<endl<<endl;
    return;
}

int main(void)
{
    list<int> l1;
    list<int> l2;
    for(int i=0;i<10;i++)
    {
        l1.push_back(i);
        l2.push_front(i*10);
    }
    display(l1);
    display(l2);
    l1.push_back(1);
    l2.push_front(10);
    l1.remove(0);
    display(l1);
    display(l2);
    l2.sort();
    l1.reverse();
    display(l1);
    display(l2);
    l1.swap(l2);
    l2.push_back(41);
    l2.push_back(0);
    l2.pop_back();
    cout<<"l1 : ";
    display(l1);
    cout<<"l2 : ";
    display(l2);
    l1.merge(l2);cout<<"after merging l1 and l2"<<endl;
    cout<<"l1 : ";
    display(l1);
    cout<<"l2 : ";
    display(l2);
    l2.clear();
    l1.sort();
    cout<<"after sorting l1: ";
    display(l1);
    list<int> :: iterator itr = l1.begin();
    list<int> :: iterator itr_2 = l1.begin();
    advance(itr,2);
    advance(itr_2,7);
    cout<<*(itr)<<" ";
    cout<<*(itr_2)<<endl;
    l1.insert(itr,21);
    l1.insert(itr,3,44);
    l1.sort();
    display(l1);
    cout<<*(itr)<<" ";
    cout<<*(itr_2)<<endl;
    itr=l1.begin();
    itr_2=l1.begin();
    advance(itr,3);
    advance(itr_2,6);
    cout<<"after erasing : ";
    l1.erase(itr,itr_2);
    display(l1);
    cout<<*(itr)<<" ";
    cout<<*(itr_2)<<endl;
    itr=l1.begin();
    display(l1);
    cout<<*(itr)<<endl;
    l1.erase(itr);
    display(l1);
    cout<<*(itr)<<endl;
    l1.clear();
    for(int i=1;i<=5;i++)
    {
        l1.push_back(i);
        l2.push_back(i*2);
    }
    cout<<"before splicing l1 : ";
    display(l1);
    cout<<"before splicing l2 : ";
    display(l2);
    l1.splice(l1.begin(),l2,l2.begin());
    cout<<"after splicing l1 : ";
    display(l1);
    cout<<"after splicing l1 : ";
    display(l2);
    l1.splice(l1.begin(),l2,l2.begin(),l2.end());
    cout<<"after 2nd splicing l1 : ";
    display(l1);
    cout<<"after 2nd splicing l2 : ";
    display(l2);
    l1.clear();
    if(l1.empty())
    {
        l1.push_back(1);
        l1.push_back(1);
        l1.push_back(1);
        l1.push_back(1);
        cout<<"before l1.unique() l1 : ";
        display(l1);
        l1.unique();
        cout<<"after l1.unique() l1 : ";
        display(l1);
    }
    return(0);
}