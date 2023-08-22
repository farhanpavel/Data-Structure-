#include <iostream>

using namespace std;

int main()
{
   int n,i,j;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   for(i=0;i<n-1;i++){
        int flag=0;
    for(j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            flag=1;
        }
    }
    if(flag==0){
        break;
    }
   }
   for(i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
   cout<<endl;


    return 0;
}
