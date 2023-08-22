//Remember we can only delete the first element means the largest root
#include <iostream>

using namespace std;
void deletey(int a[],int n);
void display(int a[]){
for(int i=1;i<=6;i++){
    cout<<a[i]<<" ";
}
cout<<endl;

}
void displayDeletey(int a[]){
for(int i=1;i<6;i++){
    cout<<a[i]<<" ";
}
cout<<endl;

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
void create(){
int a[]={0,22,55,12,23,244,56};
for(int i=2;i<=6;i++){
    inserty(a,i);
}
display(a);
deletey(a,6);
displayDeletey(a);

}
void deletey(int a[],int n){
    a[1]=a[n];
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


int main()
{
    create();
    return 0;
}
