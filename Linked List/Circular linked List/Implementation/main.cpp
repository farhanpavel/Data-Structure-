#include <iostream>

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
    newnode=new Node();
    cout<<"Enter New Data"<<endl;
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
    temp->next=head;
    cout<<"Continue 1/0"<<endl;
    cin>>n;
  }
  temp=head;
  while(temp->next!=head){
    cout<<"Data -> "<<temp->data<<endl;
    temp=temp->next;
  }
  cout<<"Data -> "<<temp->data<<endl;


}
