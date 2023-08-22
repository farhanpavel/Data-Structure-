#include <bits/stdc++.h>
using namespace std;

struct Node{
int data;
struct Node *next;
};
struct Node *head=nullptr,*newnode,*temp;

int main()
{
   int n=1;
   while(n){
    newnode = new Node();
    cout<<"Enter Node Value"<<endl;
    cin>>newnode->data;
    newnode->next=nullptr;
    if(head==nullptr){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }

    cout<<"Option"<<endl;
    cin>>n;

   }

///insert at the beginning
//    newnode = new Node();
//    cout<<"Enter Node Value"<<endl;
//    cin>>newnode->data;
//    newnode->next=head;
//    head=newnode;

///insert at the end
    newnode = new Node();
    cout<<"Enter Node Value"<<endl;
    cin>>newnode->data;
    newnode->next=nullptr;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
///insert after i'th position
//int index,i=1;
//cout<<"Index"<<endl;
//cin>>index;
//newnode = new Node();
//        cout<<"Enter Node Value"<<endl;
//    cin>>newnode->data;
//    temp=head;
//    while(i<index)
//    {
//        temp=temp->next;
//        i++;
//    }
//    newnode->next=temp->next;
//    temp->next=newnode;

    temp=head;
   while(temp!=nullptr){

   cout<<"data-> "<<temp->data<<endl;
   temp=temp->next;
   }



    return 0;
}
