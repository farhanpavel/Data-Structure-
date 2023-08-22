#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *front=nullptr,*rear,*temp;

void enqueue(int x){
Node *newnode=new Node();
newnode->data=x;
newnode->next=nullptr;
    if(rear==nullptr && front==nullptr){
    rear=newnode;
    front=newnode;
    }
    else{
    rear->next=newnode;
    rear=newnode;
    }
}
void dequeue(){
    if(front==nullptr){
        cout<<"Underflow"<<endl;
    }
    else{
        temp=front;
        front=front->next;
        delete(temp);
    }

}
void display(){
    if(front==nullptr ){
        cout<<"Empty"<<endl;
    }
    else{
        temp=front;
        while(temp!=nullptr){
            cout<<"Data-> "<<temp->data<<endl;
            temp=temp->next;
        }
    }
}

int main()
{
    enqueue(5);
    enqueue(15);
    enqueue(25);

    dequeue();
    dequeue();
    dequeue();
    display();

    return 0;
}
