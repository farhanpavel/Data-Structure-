#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *left,*right;
};
class Node *create(){
int x;
Node *newnode=new Node();
cout<<"Enter New Data ->"<<endl;
cin>>x;
if(x==-1){
    return 0;
}
newnode->data=x;
cout<<"Enter Left Child of -> "<<x<<endl;
newnode->left=create();
cout<<"Enter Right Child of -> "<<x<<endl;
newnode->right=create();
return newnode;

};

int main()
{
    Node *root;
    root=create();


    return 0;
}
