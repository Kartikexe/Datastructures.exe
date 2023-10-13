#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;
void selectionsort(int a[],int n){
int t;
for(int i=0;i<n;i++){
    int min=a[i];
    for(int j=i+1;j<n;j++){
        if(min>a[j])
        {
            min=a[j];
             t=j;
        }
    }
if(a[i]!=min){
    a[t]=a[i];
    a[i]=min;
}
}

}

int main()
{
int n;
cout<<"How many elements you want to enter:";
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++)
{
cout<<"Enter Elements:";
cin>>arr[i];
}

selectionsort(arr,n);
cout<<"sorted array";

for(int i=0;i<n;i++){
cout<<" ";
cout<<arr[i];
}
getch();
}

