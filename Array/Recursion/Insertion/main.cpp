#include <iostream>

using namespace std;

int insertation(int a[], int n, int x, int y) {
if (n < 0)
return -1;
if (n == x) {
a[n] = y;
return a[n];
}
a[n] = a[n - 1];
return insertation(a, n - 1, x, y);
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
cout<<"In Which index you want to Insert the value in the array"<<endl;
cin>>x;
cout<<"The value you want to insert"<<endl;
cin>>y;
int value;
value=insertation(a,n,x,y);
for(i=0;i<=n;i++)
{
cout<<a[i]<<" ";
}
}
