#include <iostream>

using namespace std;

void insertation(int a[],int n,int x,int y){
int j,temp;
for(j=n;j>=x;j--){
a[j]=a[j-1];
}
a[x]=y;
for(j=0;j<=n;j++){
cout<<a[j]<<" ";
} }
int main()
{
int n;
cout<<"Give the array Range"<<endl;
cin>>n;
int a[n+1],i,x,y;
for(i=0;i<n;i++){
cin>>a[i];
}
cout<<"In Which index you want to Insert the value in the array"<<endl;
cin>>x;
cout<<"The value you want to insert"<<endl;
cin>>y;
insertation(a,n,x,y);
}
