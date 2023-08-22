#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node *next;


};
Node *tail=nullptr;
int main()
{
    int n=1;
    while(n){
        Node *newnode=new Node();
        cout<<"Enter Data"<<endl;
        cin>>newnode->data;
        newnode->next=nullptr;

        if(tail==nullptr){
          tail=newnode;
          tail->next=newnode;
        }
        else{
           newnode->next=tail->next;
           tail->next=newnode;
           tail=newnode;
        }

        cout<<"Continue OR Exit"<<endl;
        cin>>n;
    }
    //Insert
    Node *prev,*current,*nexty,*temp;
    prev=tail;
    current=tail->next;
    nexty=tail->next;
    while(nexty->next!=tail->next){
      nexty=nexty->next;
      current->next=prev;
      prev=current;
      current=nexty;
    }
    current->next=prev;

    temp=current;

    while(temp->next!=tail){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
cout<<temp->data<<endl;
//cout<<temp->next->data<<endl;
//cout<<temp->next->next->data<<endl;
}

