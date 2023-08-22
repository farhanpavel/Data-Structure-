#include <iostream>

using namespace std;

int index=0;

void Push(char x)
{
    index++;
}
void Pop()
{
    index--;
}
int Peek()
{
    if(index==0)
    {
        cout<<"Correct"<<endl;
    }
    else
    {
        cout<<"Incorrect"<<endl;
    }
}

int main()
{
    string a;
    cin>>a;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='(')
        {
            Push(a[i]);
        }
        else if(a[i]==')')
        {
            Pop();
        }

    }
    Peek();




    return 0;
}
