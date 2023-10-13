#include<iostream>
#include<conio.h>

using namespace std;

void quicksort(int a[],int pe,int low,int high){
int ls,i,temp;
ls=low;
for(i=low+1;i<high;i++){
    if(a[i]<pe){
        temp=a[ls+1];
        a[ls]=a[i];
        a[i]=temp;
        ls++;
    }
}
a[ls]=pe;
if(low<high)
{
    quicksort(a,a[low],low,ls);
    quicksort(a,a[ls+1],ls+1,high);
}
}

int main(){
int n;
cout<<"How many elements you want to enter:";
cin>>n;
int *arr=new int[n];
for(int i=0;i<=n;i++)
{
cout<<"Enter Elements:";
cin>>arr[i];
}
quicksort(arr,arr[n],0,n);
cout<<"Sorted Array";
for(int i=0;i<=n;i++)
{
    cout<<" "<<arr[i];
}
getch();
}