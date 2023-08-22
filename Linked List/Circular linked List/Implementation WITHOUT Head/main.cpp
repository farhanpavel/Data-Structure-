#include <iostream>

using namespace std;
struct Node{
int data;
struct Node *next;
};
struct Node *newnode,*tail=nullptr,*temp;
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

    cout<<"Continue 1/0"<<endl;
    cin>>n;
  }
  temp=tail->next;
  while(temp->next!=tail->next){
    cout<<"Data -> "<<temp->data<<endl;
    temp=temp->next;
  }
  cout<<"Data -> "<<temp->data<<endl;


}
