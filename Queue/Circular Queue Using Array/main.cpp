#include <iostream>

using namespace std;

int a[5];
int front=-1,rear=-1;
void enqueue(int x){
if(front==-1 && rear==-1){
    front=0;
    rear=0;
    a[rear]=x;
}
else if((rear+1)%5==front)
{
    cout<<"Full"<<endl;
}
else{
    rear=(rear+1)%5;
    a[rear]=x;
}
}
void dequeue(){
if(front==-1 && rear==1){
    cout<<"Underflow"<<endl;
}
else if(front==rear){
    front=-1;
    rear=-1;
}
else{
    front=(front+1)%5;
}

}
void display(){
    if(front==-1 && rear==-1){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Result"<<endl;
       int i=front;
       while(i!=rear){
        cout<<a[i]<<endl;
        i=(i+1)%5;
       }
        cout<<a[i]<<endl;

    }
}

int main()
{
    enqueue(5);
    enqueue(19);
    enqueue(25);
    enqueue(253);
    enqueue(254);
    dequeue();
     enqueue(251);
    enqueue(252);
    display();
    return 0;
}
