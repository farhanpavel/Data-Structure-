#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node *next,*prev;


};
Node *head=nullptr,*temp;
int main()
{
    int n=1;
    while(n){
        Node *newnode=new Node();
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

        cout<<"Continue OR Exit"<<endl;
        cin>>n;
    }

//        Node *another1,*another2;
//        another1=temp;
//        temp=head;
//        while(another2!=nullptr){
//         another2=temp->next;
//         temp->next=temp->prev;
//         temp->prev=another2;
//        }
//        head=another1;

        temp=head;
    while(temp!=nullptr){
        cout<<"data -> "<<temp->next->data<<endl;
        temp=temp->next;
    }





    return 0;
}




