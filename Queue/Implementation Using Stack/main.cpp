#include <iostream>

using namespace std;
int st1[5],st2[5];
int top1=-1,top2=-1,count=0;
void push1(int x){
if(top1==4){
    cout<<"Overflow"<<endl;
}
else{
    top1++;
    st1[top1]=x;
}
}
void push2(int x){
 if(top2==4){
    cout<<"Overflow"<<endl;
}
else{
    top2++;
    st2[top2]=x;

}
}
int pop1(){
  return st1[top1--];
}
int pop2(){
  return st2[top2--];
}
void enqueue(int x){
    push1(x);
    count++;
}
void dequeue(){
if(top1==-1 && top2==-1){
    cout<<"Empty"<<endl;
}
else{
    for(int i=0;i<count;i++){
        int a=pop1();
        push2(a);
    }
    int b=pop2();
    count--;
    for(int i=0;i<count;i++){
        int a=pop2();
        push1(a);
    }

}
}

void display(){
    for(int i=0;i<=top1;i++){
        cout<<st1[i]<<" ";
    }
    cout<<endl;
}
int main()
{
  enqueue(5);
  enqueue(15);
  enqueue(25);
  enqueue(35);
  enqueue(35);
  dequeue();
  dequeue();
  dequeue();



  display();


    return 0;
}
