#include <iostream>

using namespace std;

struct Node{
int data;
struct Node *next;
struct Node *prev;
};
struct Node *head=nullptr,*temp,*newnode;
int main()
{
   int n=1;
   while(n){
    newnode=new Node();
    cout<<"Enter Data"<<endl;
    cin>>newnode->data;
    newnode->next=nullptr;
    newnode->prev=nullptr;
    if(head==nullptr){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }





    cout<<"Choice 1/0"<<endl;
    cin>>n;
   }
    temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    while(temp!=nullptr){
        cout<<"Data -> "<<temp->data<<endl;
        temp=temp->prev;
    }


    return 0;
}
