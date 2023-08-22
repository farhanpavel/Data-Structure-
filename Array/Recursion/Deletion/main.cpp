#include <iostream>

using namespace std;

int deletation(int a[],int n,int x,int index=0){
if(index>=n){
return n;
}
else if(index==x){
for(int j=index;j<n-1;j++){
a[j]=a[j+1];
}
return n-1;
}
return deletation( a, n, x,index+1);
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
cout<<"Which index you want to delete in the array"<<endl;
cin>>x;
int value;
value= deletation(a,n,x);
for(i=0;i<n-1;i++)
{
cout<<a[i]<<" ";
} }
