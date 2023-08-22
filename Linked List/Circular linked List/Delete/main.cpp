#include<iostream>
using namespace std;
struct Node{
int data;
struct Node *next;

};
struct Node *newnode=nullptr,*tail,*temp;

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

        cout<<"Continue Or Exit 1/0"<<endl;
        cin>>n;
    }
    ///Delete From Beginning
//    temp=tail->next;
//    tail->next=temp->next;
//    delete(temp);
///Delete From End
//    struct Node *current,*prev;
//    prev=tail->next;
//    current=tail->next;
//    while(current->next!=tail->next){
//        prev=current;
//        current=current->next;
//    }
//    prev->next=tail->next;
//    tail=prev;
//    delete(current);
///Delete From i'th Position
    int index,i=1;
     struct Node *current,*prev;
     current=tail->next;

    cout<<"Index"<<endl;
    cin>>index;
    while(i<index){
        prev=current;
       current=current->next;
       i++;
    }
    prev->next=current->next;
    delete(current);

    temp=tail->next;
    while(temp->next!=tail->next){
    cout<<"Data -> "<<temp->data<<endl;
    temp=temp->next;
    }
    cout<<"Data -> "<<temp->data<<endl;
}
