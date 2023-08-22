//This is For Single Digit Numbers
#include <bits/stdc++.h>

using namespace std;
bool isoperator(char x){
    return (x=='+'||x=='-'||x=='/'||x=='*'||x=='^');
}


int main()
{
    cout<<"Enter The Postfix Expression"<<endl;
    string a;
    cin>>a;
    stack<int>s;
    for(int i=0;i<a.size();i++){
        if(isdigit(a[i])){
            s.push(a[i]-'0');
        }
        else if(isoperator(a[i])){
            int operator1=s.top();
            s.pop();
            int operator2=s.top();
            s.pop();
            switch(a[i]){
            case '+':{
                s.push(operator2+operator1);
                break;
                }
            case '-':{
                s.push(operator2-operator1);
                break;
                }
            case '/':{
                s.push(operator2/operator1);
                   break;
            }
            case '*':{
                s.push(operator2*operator1);
                   break;
            }
            case '^':{
                s.push(pow(operator2,operator1));
                break;
            }

            }
        }
    }
    cout<<s.top()<<endl;



    return 0;
}
