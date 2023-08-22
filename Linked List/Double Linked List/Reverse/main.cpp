#include <iostream>

using namespace std;

struct Node{
int data;
struct Node *next;
struct Node *prev;
};
struct Node *newnode,*head=nullptr,*temp,*prev;


int main()
{
   int n=1,count=0;
   while(n){

    newnode=new Node();
    cout<<"Enter The Value"<<endl;
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

    cout<<"Option"<<endl;
    cin>>n;
   }

//     cout<<"Without Reverse Result"<<endl;
//     temp=head;
//     while(temp!=nullptr){
//        cout<<"data->"<<temp->data<<endl;
//        temp=temp->next;
//     }


   struct Node *prev,*current,*nexty;
    prev=0;
    current=head;
    nexty=head;
   while(nexty!=nullptr){
        newnode=nexty->next;//200
        nexty->next=nexty->prev;//100
        nexty->prev=newnode;//200
        nexty=newnode;//200
        }
        current=head;
        head=temp;
        temp=current;
     cout<<"Reverse Result"<<endl;

      temp=head;
     while(temp!=nullptr){
        cout<<"data->"<<temp->data<<endl;
        temp=temp->next;
     }



    return 0;
}
