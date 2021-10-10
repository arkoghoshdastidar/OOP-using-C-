#include<iostream>
#include<cstring>
#include<map>
using namespace std;
// Introduction to map also known as associative array.
void display(map<string,int> x)
{
    map<string,int>::iterator iter = x.begin();
    while(iter!=x.end())
    {
        cout<<(iter->first)<<" = "<<iter->second<<endl;
        iter++;
    }
    return;
}
int main(void)
{
    map<string,int> phone;
    // Inserting elements into the map.
    phone["arko"]=6207;
    phone["rick"]=3546;
    // Using insert member function to insert single element into the map.
    phone.insert(pair<string,int>("police",100));
    phone.insert(pair<string,int>("ambulance",102));
    phone.insert(pair<string,int>("fire_department",101));
    // Using insert member function to insert multiple elements into the map.
    map<string,int> tempMap;
    map<string,int> :: iterator it = phone.begin();
    tempMap.insert(it,phone.end());
    // Displaying the elements of the map phone and temp.
    cout<<"phone:"<<endl;
    display(phone);
    cout<<"tempMap:"<<endl;
    display(tempMap);
    // Using find member function to access the element of map.
    it = phone.find("arko");
    cout<<it->first<<" = "<<it->second<<endl;
    // Using erase member function to erase an element from the map.
    phone.erase(it);
    cout<<"After erasing an element from phone:"<<endl;
    cout<<"phone:"<<endl;
    display(phone);
    cout<<"tempMap:"<<endl;
    display(tempMap);
    // Swapping phone with tempMap
    phone.swap(tempMap);
    cout<<"After swapping phone with tempMap :"<<endl;
    cout<<"phone:"<<endl;
    display(phone);
    cout<<"tempMap:"<<endl;
    display(tempMap);
    cout<<"size of phone is "<<(phone.size())<<endl<<"size of tempMap is "<<(tempMap.size())<<endl;
    phone.clear();
    tempMap.clear();
    return(0);
}