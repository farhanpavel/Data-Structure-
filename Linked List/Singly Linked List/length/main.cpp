#include <iostream>

using namespace std;

struct Node{
int data;
struct Node *next;
};
struct Node *newnode,*head=nullptr,*temp;


int main()
{
   int n=1,count=0;
   while(n){

    newnode=new Node();
    cout<<"Enter The Value"<<endl;
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
    count++;
    temp=temp->next;
   }
   cout<<"Length "<<count<<endl;

    return 0;
}
