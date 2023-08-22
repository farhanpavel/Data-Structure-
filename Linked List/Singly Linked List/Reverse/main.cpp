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

     cout<<"Without Reverse Result"<<endl;
     temp=head;
     while(temp!=nullptr){
        cout<<"data->"<<temp->data<<endl;
        temp=temp->next;
     }


   struct Node *prev,*current,*nexty;
    prev=0;
    current=head;
    nexty=head;
   while(nexty!=nullptr){
        nexty=nexty->next;//300
        current->next=prev;//100
        prev=current;//200
        current=nexty;//300
        }
        head=prev;
     cout<<"Reverse Result"<<endl;
      temp=head;
     while(temp!=nullptr){
        cout<<"data->"<<temp->data<<endl;
        temp=temp->next;
     }



    return 0;
}
