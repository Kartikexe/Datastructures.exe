#include<iostream>
#include <conio.h>   
using namespace std;

int linearsearch(int arr[],int n,int key)
{
    /* code */
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}
int main(){
    int arr[10];
    int n=sizeof(arr)/sizeof(int);
    // cout<<sizeof(int);
    // cout<<sizeof(arr);
    int key;
    cout<<"Enter array elements";
    for(int i=0;i<10;i++){
        cout<<"\n";
        cout<<"Enter "<<i<<" Element:";
    cin>>arr[i];
    }
    cout<<"Enter value to search:";
    cin>>key;
    int position=linearsearch(arr,n,key);
    if(position==-1){  
        cout<<"Element not found";
        getch();
    }
    else{
    cout<<"Element found at position: "<<position+1;
    getch();
    }

}
