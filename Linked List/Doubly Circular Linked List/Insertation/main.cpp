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
    //Insert At Beginning
//        temp=head;
//        newnode=new Node();
//        cout<<"Enter Data"<<endl;
//        cin>>newnode->data;
//        newnode->next=temp;
//        newnode->prev=temp->prev;
//        temp=temp->prev;
//        temp->next=newnode;
//        head=newnode;
///Insert At End
//        temp=head;
//        newnode=new Node();
//        cout<<"Enter Data"<<endl;
//        cin>>newnode->data;
//        newnode->next=temp;
//        newnode->prev=temp->prev;
//        temp=temp->prev;
//        temp->next=newnode;
//        head->prev=newnode;
///Insert at i'th Postition
struct Node *another;
    int index,i=1;
    cout<<"Enter Index"<<endl;
    cin>>index;
    temp=head;
        while(i<index-1){
        temp=temp->next;
        i++;
        }
        another=temp;
        newnode=new Node();
        cout<<"Enter Data"<<endl;
        cin>>newnode->data;
        newnode->next=temp->next;
        newnode->prev=temp;
        temp=temp->next;
        temp->prev=newnode;
        another->next=newnode;


    temp=head;
    while(temp->next!=head){
        cout<<"data ->"<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<"data ->"<<temp->data<<endl;
    return 0;
}
