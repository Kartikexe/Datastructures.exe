#include<iostream>
#include<conio.h>
#define MAX 20

using namespace std;

class Stack{
    int top;
    public:
    int myStack[MAX];
    Stack(){top=-1;}
    void push(int x);
    int pop();
    void display();
};

void Stack::push(int item){
    if(top>=MAX){
    cout<<"stack overflow!!";
    }
    else{
        myStack[++top]=item;
        cout<<item<<endl;
    }
}

int Stack::pop(){
    if(top<0){
        cout<<"Stack Underflow!!";
        return 0;
    }
    else{
        int item=myStack[top--];
        return item;
    }
}
void Stack::display(){
    for(int t=top;t>=0;t--)
    cout<<myStack[t];
}
int main()
{
    class Stack s1;
    s1.push(2);
s1.display();
s1.push(4);
s1.display();
s1.push(6);
for(int i=0;i<20;i++)
s1.push(i);
int x=s1.pop();
s1.display();
cout<<"The Stack Pop : "<<endl;
s1.display();
getch();
}