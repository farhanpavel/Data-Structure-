#include <iostream>

using namespace std;
struct Node{
int data;
struct Node *next,*prev;

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
        temp->next=head;
        head->prev=newnode;

        cout<<"Continue Or Exit"<<endl;
        cin>>n;
    }

    temp=head;
    while(temp->next!=head){
        cout<<"data ->"<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<"data ->"<<temp->data<<endl;
    return 0;
}
