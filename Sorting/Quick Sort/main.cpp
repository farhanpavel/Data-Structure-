#include <iostream>

using namespace std;

int Partition(int ub,int lb,int a[]){
    int start,end,pivot;
    start=lb;
    end=ub;
    pivot=a[lb];
    while(start<end)
    {while(a[start]<=pivot){
        start++;
    }
    while(a[end]>pivot){
        end--;
    }
     if(start<end)
    {swap(a[start],a[end]);}

    }
    swap(a[lb],a[end]);
    return end;

}
int quicksort(int ub,int lb,int a[]){
    if(lb<ub){
       int loc=Partition( ub, lb, a);
       quicksort(loc-1,lb,a);
       quicksort(ub,loc+1,a);

    }

}




int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   quicksort(n-1,0,a);
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }

    return 0;
}
