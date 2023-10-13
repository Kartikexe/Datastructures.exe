#include<conio.h>
#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
};
class linked_list{
    private:
    node *head,*tail;
    public:
    linked_list(){
        head=NULL;
        tail=NULL;
    }
    void insertend(int);
    void insertbeg(int);
    void insertafter(int);
    void deletefirstnode();
    void deletelastnode();
    void deletebet();
    void display();

};
void linked_list::insertend(int n){
    node *temp=new node;
    temp->data=n;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }

}
void linked_list::insertbeg(int n){
    node *temp=new node;
    temp->data=n;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}
void linked_list::insertafter(int d){
    display();
    int n;
    node *temp=new node;
    temp->data=d;
    temp->next=NULL;
    cout<<"\n Enter after which you want to insert:";
    cin>>n;
    node *t;
    t=head;
    if(t->data!=n)
    do
    {           
    t=t->next;    
    } while(t->data!=n);
     
    temp->next=t->next;
    t->next=temp;
}
void linked_list::display(){
    node *temp;
    temp=head;
    cout<<"\n";
    while(temp!=NULL){
        cout<<" ";
        cout<<temp->data;
        temp=temp->next;
    }
}
void linked_list::deletefirstnode(){
    if(head==NULL)
    cout<<"\nEmpty Linked list";

    node *temp=head;
    head=head->next;
    cout<<"\n delete node "<<temp->data;
    delete temp;
}
void linked_list::deletelastnode(){
    if(head==NULL)
    cout<<"\n Empty linked list";
    else
    {
        node *temp=head;
        while(temp->next!=tail)
        temp=temp->next;
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
}
void linked_list::deletebet(){
    int n;
    if(head==NULL)
    cout<<"empty linked list";
    cout<<"\n";
    cout<<"enter values to delete:";
    cin>>n;\
    node *temp=head;
    while(temp->next->data!=n)
    temp=temp->next;
    node *t=temp->next;
    temp->next=t->next;

    cout<<"delete node "<<t->data;
    delete t;
}
int main(){
    linked_list a;
    a.insertend(6);
    a.insertend(9);
    a.insertend(4);
    a.insertend(0);
    a.insertend(10);
    a.insertafter(22);
    a.insertafter(5);
    a.display();
    a.insertbeg(11);
    a.insertbeg(44);
    a.display();
    a.deletebet();
    a.display();
    a.deletefirstnode();
    a.display();
    a.deletelastnode();
    a.display();
    getch();
    return 0; 

}