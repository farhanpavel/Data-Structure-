#include <iostream>

using namespace std;

void searching(int a[],int n,int x){
int j,flag=0;
for(j=0;j<n;j++){
if(a[j]==x){
flag=1;
break;
}
}
if(flag==1){
cout<<"found"<<endl;
}
else{
cout<<"Not found"<<endl;
}
}
int main()
{
int n;
cout<<"Give the array Range"<<endl;
cin>>n;
int a[n+1],i,x,y;
for(i=0;i<n;i++){
cin>>a[i];
}
cout<<"Which Value you want to find in the array"<<endl;
cin>>x;
searching(a,n,x);
}
