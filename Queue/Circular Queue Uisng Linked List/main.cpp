#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *front,*rear;
void Enqueue(int x)
{
    Node *newnode=new Node();
    newnode->data=x;
    newnode->next=nullptr;
    if( rear==nullptr)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    rear->next=front;
}
void Dequeue()
{
    Node *temp;
    temp=front;
    if(front==nullptr)
    {
        cout<<"Underflow"<<endl;
    }
    else if(front==rear)
    {

        delete(temp);
        front=nullptr;
        rear=nullptr;
    }
    else
    {

        front=front->next;
        rear->next=front;
        delete(temp);
    }


}
void display()
{
    Node *temp;
    if(front==nullptr)
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        temp=front;
        while(temp->next!=front)
        {
            cout<<"Data-> "<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<"Data-> "<<temp->data<<endl;

    }
}

int main()
{
    Enqueue(5);
    Enqueue(15);
    Enqueue(25);
    Enqueue(35);
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    display();

    return 0;
}
