#include <iostream>

using namespace std;
struct Node{
int data;
struct Node *next;

};
struct Node *newnode=nullptr,*tail,*temp;

int main()
{
    int n=1;
    while(n){
        newnode=new Node();
        cout<<"Enter New Data"<<endl;
        cin>>newnode->data;
        newnode->next=nullptr;
        if(tail==nullptr){
            tail=newnode;
            tail->next=newnode;
        }
        else{
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }

        cout<<"Continue Or Exit 1/0"<<endl;
        cin>>n;
    }
///   Insert At Beginning
//    newnode=new Node();
//    cout<<"Enter New Data"<<endl;
//    cin>>newnode->data;
//    newnode->next=tail->next;
//    tail->next=newnode;
/// Insert At End
//    newnode=new Node();
//    cout<<"Enter New Data"<<endl;
//    cin>>newnode->data;
//    newnode->next=tail->next;
//    tail->next=newnode;
//    tail=newnode;
///Insert at After I'th Position
//    struct Node *another;
//    int index,i=1;
//    cout<<"Which Index"<<endl;
//    cin>>index;
//    another=tail->next;
//    while(i<index)
//    {
//    another=another->next;
//    i++;
//    }
//    newnode=new Node();
//    cout<<"Enter New Data"<<endl;
//    cin>>newnode->data;
//    newnode->next=another->next;
//    another->next=newnode;
//Insert At I'th Position
     struct Node *another;
    int index,i=1;
    cout<<"Which Index"<<endl;
    cin>>index;
    another=tail->next;
    while(i<index-1)
    {
    another=another->next;
    i++;
    }
    newnode=new Node();
    cout<<"Enter New Data"<<endl;
    cin>>newnode->data;
    newnode->next=another->next;
    another->next=newnode;



//Display
 temp=tail->next;
 while(temp->next!=tail->next){
    cout<<"Data ->"<<temp->data<<endl;
    temp=temp->next;
 }
cout<<"Data ->"<<temp->data<<endl;


    return 0;
}
