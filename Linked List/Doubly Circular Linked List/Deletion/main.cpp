#include <iostream>

using namespace std;
struct Node{
int data;
struct Node *next,*prev;

};
struct Node *head=nullptr,*temp,*newnode,*another;

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
        temp->next=head;
        head->prev=newnode;

        cout<<"Continue Or Exit"<<endl;
        cin>>n;
    }
    ///Delete From Beginning

//       another=head;
//       temp=head;
//       temp=temp->next;
//       another=another->prev;
//       temp->prev=another;
//       another->next=temp;
//       delete(head);
//       head=temp;

///Delete From End
//    struct Node *op;
//    op=temp;
//    another=temp->prev;
//    temp=temp->next;
//    another->next=temp;
//    temp->prev=another;
//    delete(op);
///Delete From i'th Position
    struct Node *op;
    int index,i=1;
    cout<<"Enter Index"<<endl;
    cin>>index;
    temp=head;
    while(i<index){
        temp=temp->next;
        i++;
    }
    op=temp;
    another=temp->next;
    temp=temp->prev;
    another->prev=temp;
    temp->next=another;
    delete(op);



    temp=head;
    while(temp->next!=head){
        cout<<"data ->"<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<"data ->"<<temp->data<<endl;
    return 0;
}
