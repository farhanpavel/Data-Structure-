#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node *left,*right;
};

void create(){
    int n;
Node *q,*root;
cout<<"Enter Num Of Nodes"<<endl;
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
            if(p->data>q->data){
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

}



int main()
{
    create();
    return 0;
}
