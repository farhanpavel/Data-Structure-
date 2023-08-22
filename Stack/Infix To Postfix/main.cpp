#include <bits/stdc++.h>
using namespace std;

int precedence(char x){

    if(x=='^')
    return 3;
    else if(x=='/'||x=='*')
    return 2;
    else if(x=='+'||x=='-')
    return 1;
    else
    return 0;
}



int main()
{
    string a,postfix;
    cin>>a;
    stack<char>s;
    for(int i=0;i<a.size();i++){
        if(isalnum(a[i]))
            postfix+=a[i];
        else if(a[i]=='(')
            s.push(a[i]);
        else if(a[i]==')')
        {
            while(!s.empty() && s.top()!='('){
                    postfix+=s.top();
                    s.pop();
                }
                s.pop();
        }
        else{
            while(!s.empty() && precedence(a[i])<=precedence(s.top())){
                postfix+=s.top();
                s.pop();
            }
            s.push(a[i]);

        }
    }
     while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    cout<<postfix<<endl;





    return 0;
}
