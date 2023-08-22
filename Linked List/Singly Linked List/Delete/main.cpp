#include <iostream>

using namespace std;

struct Node{
int data;
struct Node *next;
};

struct Node *head=nullptr,*newnode,*temp;

int main()
{
    int n=1;

    while(n){
        newnode=new Node();
        cout<<"Enter The Data You Want to Insert In the Node"<<endl;
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
    ///Delete From Beginning
//    temp=head;
//    head=head->next;
//    delete(temp);

    ///delete from the end
//    struct Node *prev;
//    temp=head;
//    while(temp->next!=nullptr){
//        prev=temp;
//        temp=temp->next;
//    }
//    prev->next=nullptr;
//    delete(temp);
///Delete from the i'th position
    int index,i=1;
    cout<<"Which Position"<<endl;
    cin>>index;
    struct Node *prev;
     temp=head;
    while(i<index){
        prev=temp;//100
        temp=temp->next;//200
        i++;
    }
    prev->next=temp->next;
    delete(temp);




    temp=head;
    while(temp!=nullptr){
        cout<<"Data -> "<<temp->data<<endl;
        temp=temp->next;
    }



    return 0;

}
