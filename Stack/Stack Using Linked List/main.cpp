#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node *next;
};
Node *top=nullptr,*temp;
void Push(int x){
    Node *newnode=new Node();
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
void Pop(){
    temp=top;
    if(top==nullptr){
        cout<<"UnderFlow"<<endl;
    }
    else{
        top=top->next;
        delete(temp);

    }
}
void Peek(){
    cout<<"Top element-> "<<top->data<<endl;
}
void Display(){
    if(top==nullptr){
        cout<<"underflow"<<endl;
    }
    else
    {

    temp=top;
    while(temp!=nullptr){
    cout<<temp->data<<endl;
    temp=temp->next;
    }

    }

}
int main()
{

   Push(5);
   Push(4);
   Push(3);
   Push(2);
   Push(1);
   Push(0);
   Peek();
   Pop();
   Pop();
   Display();
   Peek();
   Pop();
   Pop();
   Peek();

}
