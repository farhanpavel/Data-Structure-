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
   temp=head;
   while(temp!=nullptr){
    cout<<"DATA -> "<< temp->data<<endl;
    temp=temp->next;
   }

    return 0;
}
