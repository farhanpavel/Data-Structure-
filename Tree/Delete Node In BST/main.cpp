#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *left,*right;
};
Node *helper(Node *root);
Node *pore(Node *root);

Node *create(){
    int n;
Node *q,*root;
cout<<"Enter The Num of Nodes"<<endl;
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
     if(q->data<p->data){
        if(q->right==nullptr){
            q->right=p;
            break;
        }
        else{
            q=q->right;
        }
     }
     else{
        if(q->left==nullptr){
            q->left=p;
            break;
        }
        else{
            q=q->left;
        }

     }

    }
  }


}
return root;
}
Node *deletion(Node *root,int key)
{
    if(root==nullptr){
        return nullptr;
    }
     if(root->data==key){
        return helper(root);
    }
    Node *dummy;
    dummy=root;
    while(root!=nullptr){
        if(root->data>key){
            if(root->left !=nullptr &&root->left->data==key){
                root->left=helper(root->left);
                break;
            }
            else{
                root=root->left;
            }

        }
        else{
             if(root->right !=nullptr &&root->right->data==key){
                root->right=helper(root->right);
                break;
            }
            else{
                root=root->right;
            }


        }
    }
    return dummy;
}
Node *helper(Node *root){
    if(root->left==nullptr){
        return root->right;
    }
    else if(root->right==nullptr){
        return root->left;
    }
    Node *righty=root->right;
    Node *lastindex=pore(root->left);
    lastindex->right=righty;
    return root->left;

}
Node *pore(Node *root){
    if(root->right==nullptr){
        return root;
    }
    return pore(root->right);
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
    int key;
    Node *root;
    root=create();
    cout<<"Enter The Node you want to delete"<<endl;
    cin>>key;
    root=deletion(root,key);
    display(root);




    return 0;
}
