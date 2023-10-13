#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

int n,temp;
cout<<"How many elements you want to enter:";
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++)
{
cout<<"Enter Elements:";
cin>>arr[i];
}
cout<<"Enter which Elemnt you want to search:";
int s;
cin>>s;
for(int i=0;i<n;i++)
{
for(int j=0;j<(n-i-1);j++)
{
    if(arr[j]>arr[j+1])
    {
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
}
}
cout<<"sorted by Bubble sort \n";
for(int i=0;i<n;i++)
{
    cout<<" "<<arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]==s){
        cout<<"\n Element found:"<<arr[i]<<" at index:"<<i;
        break;
    }
    
}

getch();
delete []arr;
}