#include <iostream>

using namespace std;
struct Node{
int data;
struct Node *next,*prev;
};
struct Node *head=nullptr,*temp,*newnode,*ano;


int main()
{
   int n=1;
   while(n){
    newnode=new Node();
    cout<<"Enter New Data"<<endl;
    cin>>newnode->data;
    newnode->next=nullptr;
    newnode->prev=nullptr;
    if(head==nullptr){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }


    cout<<"Continue 1/0"<<endl;
    cin>>n;
   }
   //Deletaion from beginning
//   temp=head;
//   head=head->next;
//   head->prev=nullptr;
//    delete(temp);

  //Deletation from end
//  ano=temp;
//  temp=temp->prev;
//  temp->next=nullptr;
//  delete(ano);
//Delete From I'th Position
int index,i=1;
cout<<"Enter Index"<<endl;
cin>>index;
    temp=head;
    while(i<index){
    ano=temp;
    temp=temp->next;
    i++;
    }
    ano->next=temp->next;
    temp=temp->next;
    temp->prev=ano;




   temp=head;
   while(temp!=nullptr){
    cout<<"Data -> "<<temp->data<<endl;
    temp=temp->next;
   }
    return 0;
}
