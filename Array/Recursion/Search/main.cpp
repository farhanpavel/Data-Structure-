#include <iostream>

using namespace std;

int searching(int a[],int n,int x){
for(int j=0;j<n;j++){
if(a[j]==x){
return 1;
} }
return 0;
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
bool value2;
value2=searching(a,n,x);
if(value2==true){
cout<<"found"<<endl;
}
else{
cout<<"Not found"<<endl;
} }
