//Remember for Delete From Front(front++)
//Remember for Insert From Rear(Rear++)
//Remember For Delete From Rear(Rear--)
//Remember For Insert From Front(Front--)

#include <iostream>

using namespace std;
int dq[5];
int front=-1,rear=-1;
void EnqueueFront(int x){
 if((rear+1)%5==front){
    cout<<"Full"<<endl;
 }

else if(front==-1 && rear==-1){
    front=0;
    rear=0;
    dq[front]=x;
}
else if(front==0){
    front=4;
    dq[front]=x;
}
else {
   front--;
   dq[front]=x;
}
}
void EnqueueRear(int x)
{
  if((rear+1)%5==front){
    cout<<"Full"<<endl;
 }

else if(front==-1 && rear==-1){
    front=0;
    rear=0;
    dq[rear]=x;
}
else if(rear==4){
    rear=0;
    dq[rear]=x;
}
else {
   rear++;
   dq[rear]=x;
}

}
void DequeueFront(){
    if(front==-1 && rear==-1){
        cout<<"Underflow"<<endl;
    }

    else if(front==rear){
        front=-1;
        rear=-1;
    }
    else if(front==4){
        front=0;
    }
    else{
        front++;
    }
}
void DequeueRear(){
    if(front==-1 && rear==-1){
        cout<<"Underflow"<<endl;
    }

    else if(front==rear){
        front=-1;
        rear=-1;
    }
    else if(rear==0){
        rear=4;
    }
    else{
        rear--;
    }
}



void Display(){
int i=front;
while(i!=rear){
    cout<<dq[i]<<" ";
    i=(i+1)%5;
}
cout<<dq[i]<<" ";
cout<<endl;
}


int main()
{
     EnqueueRear(45);
    EnqueueFront(5);
    EnqueueFront(15);
    EnqueueFront(25);
    EnqueueFront(35);
    DequeueFront();
    DequeueRear();

    Display();

    return 0;
}
