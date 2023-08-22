#include <iostream>
using namespace std;
int Queue[5];
int rear=-1,front=-1;

void Enqueue(int x){
    if(rear==4){
        cout<<"Overflow"<<endl;
    }
  else if(front==-1 && rear==-1){
    front=0;
    rear=0;
    Queue[rear]=x;
  }
  else{
    rear++;
    Queue[rear]=x;
  }
}
void Deque(){
    if(rear==-1 && front==-1){
        cout<<"Underflow"<<endl;
    }
    else if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }

}
void peek(){
cout<<"Peek value Is "<<Queue[front]<<endl;
}
void display(){
if(front==-1 && rear == -1){
    cout<<"Empty"<<endl;
}
else{
    for(int i=front;i<=rear;i++){
        cout<<Queue[i]<<" ";
    }
    cout<<endl;
}

}




int main()
{
    Enqueue(10);
    Enqueue(11);
    Enqueue(12);

    Enqueue(15);
    Enqueue(17);

    Deque();
    peek();
    Deque();
    Deque();
    Deque();
    Deque();
    Deque();
//    Deque();
    display();

    return 0;
}
