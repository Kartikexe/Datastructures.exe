#include<conio.h>
#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

class circularlinked_list{
    private:
    node *head,*tail;
    public:
    circularlinked_list(){
        head=NULL;
        tail=NULL;
    }
    void cinsertend(int);
    void cinsertbeg(int);
    void cdeletefirstnode();
    void cdeletelasttnode();
    void display();

};

void circularlinked_list::cinsertend(int n){
    node *temp=new node;
    temp->data=n;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        tail->next=head;
    }
    else{
        tail->next=temp;
        tail=temp;
        tail->next=head;
    }
}
void circularlinked_list::cinsertbeg(int n){
    node *temp=new node;
    temp->data=n;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
        tail=temp;
        tail->next=head;
    }
    else{
        temp->next=head;
        head=temp;
        tail->next=head;
    }
}
void circularlinked_list::cdeletefirstnode(){
    if(head==NULL)
    cout<<"\n Empty linked list";
    node *temp=head;
    head=head->next;
    cout<<"\n Delete node "<<temp->data;
    delete temp;
    tail->next=head;
}
void circularlinked_list::cdeletelasttnode(){
    if(head==NULL)
    cout<<"empty linked list";
    else{
        node *temp=head;
        while(temp->next!=tail)
        temp=temp->next;
        temp->next=NULL;
        delete tail;
        tail=temp;
        tail->next=head;
    }
}
void circularlinked_list::display(){
    node *temp;
    temp=head;
    do{
        cout<<" "<<temp->data;
        temp=temp->next;
    }while(temp!=head);
    cout<<"\n";
}
// start of main 
int main(){
    circularlinked_list c;
    c.cinsertbeg(3);
    c.cinsertbeg(6);
    c.cinsertbeg(2);
    c.cinsertend(99);
    c.cinsertend(87);
    c.display();
    c.cdeletefirstnode();
    c.display();
    c.cdeletelasttnode();
    c.display();

}