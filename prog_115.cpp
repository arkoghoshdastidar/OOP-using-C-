#include <iostream>
#include <vector>
using namespace std;
// vector introduction
template <class T>
void display(const vector<T> &v)
{
    for (int i = 0; i < v.size() /*v.size() returns the number of elements present inside the vector v*/; i++)
        cout << v.at(i) << " ";
    cout << endl;
    return;
}
int main(void)
{
    vector<int> v2(1,101);
    vector<int> v1;
    v1.push_back(0); //v1.push_back(val) add's val to the end of the vector increasing the size of the vector by one.
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);
    v1.push_back(70);
    v1.push_back(80);
    v1.push_back(90);
    v1.push_back(100);
    cout << "initial values stored in vector v1 : ";
    display(v1);
    cout << "initial values stored in vector v2 : ";
    display(v2);
    cout << "v1.front() = " << v1.front() << endl;       //v1.front() returns the value stored in the first element of the vector.
    cout << "v1.back() = " << v1.back() << endl;         //v1.back() returns the value stored in the last element of the vector.
    cout << "*(v1.begin) = " << *(v1.begin()) << endl;   // v1.begin() returns the pointer to the first element of the vector.
    cout << "v1.capacity() = " << v1.capacity() << endl; // v1.capacity() returns the size of the vector stored in the memory in terms of elements.

    if (!v1.empty())
        cout << "vector<int> v1 is not an empty vector." << endl;
    else
    {
        cout << "vector<int> v1 is an empty vector." << endl;
    }
    cout << "updating the values of the vector v..." << endl;
    vector<int>::iterator itr = v1.begin();
    for (int j = 100; itr != v1.end() /*v1.end() returns a pointer to the last element +1 of the vector*/; itr++, j -= 10)
    {
        *(itr) = j;
    }
    cout << "updated values of vector v1 : ";
    display(v1);
    itr = v1.begin();
    v1.erase(itr); //v1.erase(itr) deletes the first element from the vector.
    cout << "after v1.erase(itr) : ";
    display(v1);
    v1.erase(itr, itr + 1);
    cout << "after v1.erase(itr,itr+1) : ";
    display(v1);
    v1.insert(itr, 100);
    v1.insert(itr + 1, 1, 90);
    cout << "after v1.insert(itr,100) and v1.insert(itr+1,1,90) : ";
    display(v1);
    v1.pop_back();//v1.pop_back() deletes the last element of the vector and reduces the size of the vector by one.
    cout << "v1 after one pop_back() : ";
    display(v1);
    v1.swap(v2);//v1.swap(v2) swap's the values of v1 and v2.
    cout<<"after swapping v1 and v2 using v1.swap(v2) : "<<endl<<"v1 : ";
    display(v1);
    cout<<"v2 : ";
    display(v2);
    v1.clear(); //v1.clear() delete's all the elements stored in the vector and reduces the size of the vector to zero.
    itr = v2.begin();// itr points to 100
    itr=v2.erase(itr);

    display(v2);
    cout<<*(itr)<<endl;
    v2.insert(itr,100);
    display(v2);
    cout<<*(itr)<<endl;
    itr=v2.begin()+2;
    vector<int>:: iterator itr_2 = v2.begin()+4;
    v2.erase(itr,itr_2);
    display(v2);
    cout<<*(itr)<<" "<<*(itr_2)<<endl;
    vector<int>:: iterator itr_3 = v2.insert(itr_2,70);
    display(v2);
    cout<<*(itr_2)<<endl;
    cout<<*(itr_3)<<endl;

    cout<<"after clearing v1 using v1.clear() : "<<endl<<endl;
    display(v1);
    return (0);
}