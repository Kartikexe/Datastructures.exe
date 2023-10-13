#include<conio.h>
#include<iostream>

using namespace std;

void insertionsort(int array[],int size){
    for(int i=1;i<size;i++){
        int key=array[i];
        int j=i-1;
        while(key<array[j]&&j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
}

int main(){

int n;
cout<<"How many elements you want to enter:";
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++)
{
cout<<"Enter Elements:";
cin>>arr[i];
}
insertionsort(arr, n);
 cout << "Sorted array in ascending order:\n";
 for (int i = 0; i < n; i++) {
 cout <<"  "<<arr[i];
 }
// cout<<size;
// cout<<"/n"<<sizeof(arr);
// cout<<"x"<<sizeof(x);
// cout<<"/n"<<sizeof(int);
getch();
return 0;
}
