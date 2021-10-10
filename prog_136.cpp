#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};
class LRUCache:public Cache
{
    public:
        LRUCache(int cp);
        void set(int,int);
        int get(int);
        void setMap(Node* head,map<int,Node*> &mp);
};

LRUCache::LRUCache(int cp){
    this->cp=cp;   
}

int LRUCache::get(int _key)
{
    for(int i=0;i<mp.size();i++)
    {
        if(mp[i]->key==_key)
            return(mp[i]->value);
    }
    return(-1);
}

void LRUCache::set(int _key,int _val)
{
    int index,getVal=get(_key);
    if(getVal!=-1)
    {
        for(int i=0;i<mp.size();i++)
        {
            if(mp[i]->key==_key)
            {
                index=i;
                break;
            }
        }
        if(index==0)
        {
            mp[index]->value=_val;
            return;
        }
        else if(index==mp.size()-1)
        {
            mp[index]->value=_val;
            mp[index]->prev->next=NULL;
            mp[index]->prev=NULL;
            mp[index]->next=head;
            tail=mp[index]->prev;
            head->prev=mp[index];
            head=mp[index];
            setMap(head,mp);
        }
        else
        {
            mp[index]->value=_val;
            mp[index]->prev->next=mp[index]->next;
            mp[index]->next->prev=mp[index]->prev;
            mp[index]->next=head;
            mp[index]->prev=NULL;
            head->prev=mp[index];
            head=mp[index];
            setMap(head,mp);
        }
    }
    else
    {
       Node* tempNode=new Node(_key,_val);
       if(mp.size()==cp)
       {
           mp[cp-1]->prev->next=NULL;
           mp[cp-1]->prev=NULL;
           delete tail;
           tail=mp[cp-2];
           tempNode->next=head;
           head->prev=tempNode;
           head=tempNode;
           setMap(head,mp);
       }
       else
       {
           if(mp.size()==0)
           {
               head=tempNode;
               tail=tempNode;
               setMap(head,mp);
           }
           else
           {
               tempNode->next=head;
               head->prev=tempNode;
               head=tempNode;
               setMap(head,mp);
           }
       }
    }
    return;
}

void LRUCache::setMap(Node* head,map<int,Node*>&mp)
{
    int i=0;
    Node* current=head;
    while(current)
    {
       mp[i]=current;
       i++;
       current=current->next; 
    }
    // for(int i=0;i<mp.size();i++)
    //     cout<<mp[i]->key<<","<<mp[i]->value<<"->";
    // cout<<"NULL\n";
    return;
}
int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}