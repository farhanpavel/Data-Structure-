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
   ///insert at Beginning
//   newnode=new Node();
//    cout<<"Enter New Data"<<endl;
//    cin>>newnode->data;
//    newnode->next=head;
//    newnode->prev=nullptr;
//    head->prev=newnode;
//    head=newnode;
///insert at end
//    newnode=new Node();
//    cout<<"Enter New Data"<<endl;
//    cin>>newnode->data;
//
//    temp->next=newnode;
//    newnode->prev=temp;
//    newnode->next=nullptr;
///After I'th Position
    newnode=new Node();
    cout<<"Enter New Data"<<endl;
    cin>>newnode->data;
    int index,i=1;
    cout<<"Enter A Index"<<endl;
    cin>>index;
    temp=head;
    while(i<index)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
//After i'th position

//    newnode=new Node();
//    cout<<"Enter New Data"<<endl;
//    cin>>newnode->data;
//    int index,i=1;
//    cout<<"Enter A Index"<<endl;
//    cin>>index;
//    temp=head;
//    if(index==1){
//         newnode=new Node();
//    cout<<"Enter New Data"<<endl;
//    cin>>newnode->data;
//    newnode->next=head;
//    newnode->prev=nullptr;
//    head->prev=newnode;
//    head=newnode;
//    }
//    else
//    {
//    while(i<index-1)
//    {
//        temp=temp->next;
//        i++;
//    }
//
//    newnode->next=temp->next;
//    temp->next=newnode;
//    newnode->prev=temp;
//
//    }
//
//
//

   temp=head;
   while(temp!=nullptr){
    cout<<"DATA -> "<<temp->data<<endl;
    temp=temp->next;
   }


    return 0;
}
