#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;
int binarysearch(int array[],int x,int low,int high)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]==x)
        return mid;
        if(array[mid]<x)
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
} // namespace name

int main(){
int array[]={3,4,5,6,7,8,10};
int x=7;
int n=sizeof(array)/sizeof(int);
int result=binarysearch(array,x,0,n-1);
if(result==-1)
cout<<"Element not found";
else
cout<<"Element found at index:"<<result;
getch();
}
