#include <iostream>

using namespace std;
void display(int a[]);
void inserty(int a[],int n){
int temp,i;
temp=a[n];
i=n;
while(i>1 && a[i/2]<temp){
    a[i]=a[i/2];
    i=i/2;
}
a[i]=temp;

}
void create(){
int a[]={0,10,13,25,30,6,27,29,227};
    for(int i=2;i<=8;i++){
    inserty(a,i);
    }
    display(a);
}
void display(int a[]){
    cout<<"Max Heap"<<endl;
for(int i=1;i<=8;i++){

    cout<<a[i]<<" ";
}
cout<<endl;
}

int main()
{
   create();


    return 0;
}
