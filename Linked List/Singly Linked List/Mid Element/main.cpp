#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node *next;
};
Node *head=nullptr,*temp=nullptr;
int main()
{
    int n=1,count=0;
    while(n){

        Node *newnode=new Node();
        cout<<"Enter The Data"<<endl;
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
        count++;
        cout<<"Continue Or Not"<<endl;
        cin>>n;
    }
    int mid=count/2;
    temp=head;
    while(1){
    count--;
    if(mid!=count){
        temp=temp->next;
    }
    else{
        cout<<"data-> "<<temp->data<<endl;
    }


    }



    return 0;
}
