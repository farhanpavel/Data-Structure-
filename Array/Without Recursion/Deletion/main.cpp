#include <iostream>

using namespace std;

void deletation(int a[],int n,int x){
int j;
for(j=x;j<n;j++){
a[j]=a[j+1];
}
cout<<"After the deletation"<<endl;
for(j=0;j<n-1;j++){
cout<<a[j]<<" ";
}
cout<<endl;
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
deletation(a,n,x);
}
