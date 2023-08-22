#include <iostream>

using namespace std;
int Stack[5],top=-1;

void Push(){
  if(top==4){
    cout<<"OverFlow"<<endl;
  }
  else{
    int x;
    cout<<"Enter New Value"<<endl;
    cin>>x;
    top++;
    Stack[top]=x;
  }
}
void Pop(){
    if(top==-1){
        cout<<"Underflow"<<endl;
    }
    else{
        top--;
    }
}
void Display(){
   for(int i=top;i>=0;i--){
    cout<<Stack[i]<<endl;
   }
}
void Peek(){
    cout<<"Peek value -> "<<Stack[top]<<endl;
}
int main()
{
    int cr;
   do{
   cin>>cr;
    switch(cr){
    case 1:
     {
         Push();
         break;
     }
     case 2:
     {
         Pop();
         break;
     }
     case 3:
     {
         Peek();
         break;
     }
     case 4:
     {
         Display();
         break;
     }
     default:{
     cout<<"Invalid"<<endl;
     break;
     }

    }
   }
   while(cr!=0);
    return 0;
}
