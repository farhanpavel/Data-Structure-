#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;


};
Node *rear=nullptr,*front=nullptr;

void Enqueue(int x){
Node *newnode=new Node();
newnode->data=x;
newnode->next=nullptr;
if(rear == nullptr && front==nullptr){
    rear=newnode;
    front=newnode;
}
else{
   rear->next=newnode;
   rear=newnode;
}
}
void Dequeue(){
    if(front==nullptr ){
        cout<<"Underflow"<<endl;
    }
    else
{Node *temp;
temp=front;
front=front->next;
delete(temp);
}
}
void display(){
    Node *temp;
    temp=front;
    while(temp!=nullptr){
        cout<<"data-> "<<temp->data<<endl;
        temp=temp->next;
    }

}
void peek(){
   Node *temp;
   temp=front;
   cout<<"Peek Element is -> "<<temp->data<<endl;

}
int main()
{
    Enqueue(5);
    Enqueue(6);
    Enqueue(7);
    Dequeue();
    peek();
    Dequeue();

    Dequeue();
    Dequeue();

    display();
    return 0;
}
