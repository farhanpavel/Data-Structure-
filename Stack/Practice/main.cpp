#include <bits/stdc++.h>

using namespace std;
int precedence(char x){
    if (x=='^')
    return 3;
    else if(x=='/' || x=='*')
    return 2;
    else if(x=='+' || x=='-')
    return 1;
    else
    return 0;

}

int main()
{
    string infix;
    cout<<"Enter The Infix Expression"<<endl;
    cin>>infix;
    string postfix;
    stack<char>s;
    for(int i=0;i<infix.size();i++){
        if(isalnum(infix[i])){
            postfix+=infix[i];
        }
        else if(infix[i]=='('){
            s.push(infix[i]);
        }
        else if(infix[i]==')'){
            while(!s.empty() && s.top()!='('){
            postfix+=s.top();
            s.pop();
        }
        s.pop();//Cause '(' We need to remove this
        }
        else{
            while(!s.empty() && precedence(infix[i])<=precedence(s.top()))
            {
               postfix+=s.top();
               s.pop();
            }
            s.push(infix[i]);
        }

    }
    while(!s.empty()){
        postfix+=s.top();
        s.pop();
    }
    cout<<"Postfix Expression"<<endl;
    cout<<postfix<<endl;


    return 0;
}
