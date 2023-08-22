#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node *left,*right;
};
Node *create(){
 Node *q,*root;
    cout<<"How many Node will be There"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       Node *p=new Node();
       cout<<"Enter Data"<<endl;
       cin>>p->data;
       p->left=nullptr;
       p->right=nullptr;
       if(i==0){
        root=p;
       }
       else{
        q=root;
        while(1){
                if(p->data>q->data)
                {
                    if(q->right==nullptr)
                    {
                        q->right=p;
                        break;
                    }
                    else
                    {
                        q=q->right;
                    }
                }
                else{
                     if(q->left==nullptr)
                    {
                        q->left=p;
                        break;
                    }
                    else
                    {
                        q=q->left;
                    }

                }
        }
       }
    }
    return root;
}
///*&root return the address of p,which is stored in root

void insertion(Node *&root)
{
  Node *p=new Node();
  Node *q;
     int value;
     cout<<"Enter The Value of a Newnode"<<endl;
     cin>>value;
        p->data=value;
       if(root==nullptr){
        root=p;
       }
       else{
        q=root;
        while(1){
                if(value>q->data)
                {
                    if(q->right==nullptr)
                    {
                        q->right=p;
                        break;
                    }
                    else
                    {
                        q=q->right;
                    }
                }
                else{
                     if(q->left==nullptr)
                    {
                        q->left=p;
                        break;
                    }
                    else
                    {
                        q=q->left;
                    }

                }
        }
       }
}
void display(Node *root){
 if (root == nullptr) {
        return;
    }
    display(root->left);
    cout << root->data << " ";
    display(root->right);

}


int main()
{
    Node *root;
    root=create();
    insertion(root);
    display(root);

    return 0;
}
