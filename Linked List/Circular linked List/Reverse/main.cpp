#include<iostream>
using namespace std;
struct Node{
int data;
struct Node *next;

};
struct Node *newnode=nullptr,*tail,*temp;

int main()
{
    int n=1;
    while(n){
        newnode=new Node();
        cout<<"Enter New Data"<<endl;
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

        cout<<"Continue Or Exit 1/0"<<endl;
        cin>>n;
    }
    struct Node *current,*prev,*another;
    current=tail->next;
    prev=tail->next;
    another=current->next;
    while(current!=tail){
        prev=current;
        current=another;
        another=current->next;
        current->next=prev;
    }
    another->next=tail;
    tail=another;
//    tail=another;
//    another=


    temp=another->next;
    while(temp->next!=tail->next){
        cout<<"Data ->"<<temp->data<<endl;
        temp=temp->next;
    }
cout<<"Data ->"<<temp->data<<endl;
}
///Also you can use this one

// Node *prev,*current,*nexty,*temp;
//    prev=tail;
//    current=tail->next;
//    nexty=tail->next;
//    while(nexty->next!=tail->next){
//      nexty=nexty->next;
//      current->next=prev;
//      prev=current;
//      current=nexty;
//    }
//    current->next=prev;
//
//    temp=current;
//
//    while(temp->next!=tail){
//        cout<<temp->data<<endl;
//        temp=temp->next;
//    }
//cout<<temp->data<<endl;
