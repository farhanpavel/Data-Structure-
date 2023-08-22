//Remember we can only delete the first element means the largest root
#include <bits/stdc++.h>

using namespace std;

void display(int a[]){
for(int i=1;i<=7;i++){
    cout<<a[i]<<" ";
}
cout<<endl;

}
void deletey(int a[],int n){
    int val;
    val=a[1];
    a[1]=a[n];
    a[n]=val;
    int i=1,j=2*i;
    while(j<n-1){
       if(a[j]<a[j+1]){
        j=j+1;
       }
       if(a[i]<a[j]){
        swap(a[i],a[j]);
        i=j;
        j=j*2;
       }
       else{
        break;
        ///If Not Big That means correct position
       }

    }

}

void inserty(int a[],int n){
int i=n,temp;
temp=a[n];
while(i>1 && temp>a[i/2]){
    a[i]=a[i/2];
    i=i/2;

}
a[i]=temp;
}



int main()
{
    int a[]={0,-1,-57,30,25,15,240,35};
    for(int i=2;i<=7;i++){
    inserty(a,i);
    }
    display(a);
    for(int i=7;i>1;i--){
        deletey(a,i);
    }
     display(a);


    return 0;
}
