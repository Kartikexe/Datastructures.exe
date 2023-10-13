#include<iostream>
#include<conio.h>

using namespace std;

struct doublynode{
    int data;
    doublynode *next,*prev;
};
class doublylist{
    private:
    doublynode *head,*tail;
    public:
    doublylist(){
        head=NULL;
        tail=NULL;
    }
void dinsertend(int);
void dinsertbeg(int);
void dinsertafter(int);
void ddeletebeg();
void ddeleteend();
void ddeletebtw();
void bdisplay();
void fdisplay();
};
void doublylist::dinsertend(int n){
    doublynode *temp=new doublynode;
    temp->data=n;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        tail->next=NULL;
    }
    // cout<<"\n";
    // cout<<temp->data<<"\n";
    // cout<<temp->next<<"temp next \n";
    // cout<<temp->prev<<" temp prev \n";
    // cout<<"temp \n"<<temp;
    // cout<<"\n";

}
void doublylist::dinsertbeg(int n){
    
    doublynode *temp=new doublynode;
    temp->data=n;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    cout<<"\n end of beg";
}
void doublylist::dinsertafter(int n){
    
    doublynode *temp=new doublynode;
    temp->data=n;
    temp->next=NULL;
    temp->prev=NULL;
    cout<<"enter after which element you want to insert:";
    int i;
    cin>>i;
    doublynode *counter;
    counter=head;
    if(counter->data!=i){
    do{           
       counter=counter->next;       
    } while(counter->data!=i);
    }   
    if(counter==tail){
        cout<<"\n couter is tail \n";
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
       
    }
    else{
        temp->prev=counter;
        temp->next=counter->next;
        counter->next->prev=temp;
        counter->next=temp;  
        
    }
    
    
    // cout<<temp->data<<"\n";
    // cout<<temp->next<<"temp next \n";
    // cout<<temp->prev<<" temp prev \n";
    // cout<<"temp \n"<<temp;  
}
void doublylist::bdisplay(){
    doublynode *counter;
    counter=tail;
    do{
        cout<<" "<<counter->data;
        counter=counter->prev;
    }while(counter!=NULL);
    cout<<"\n display called: \n";
}
void doublylist::fdisplay(){
    doublynode *counter;
    counter=head;
    do{
        cout<<" "<<counter->data;
        counter=counter->next;
    }while(counter!=NULL);
    cout<<"\n fdisplay called: \n";
}
void doublylist::ddeletebeg(){
    doublynode *temp;
    temp=head;
    head=temp->next;
    head->prev=NULL;   
    delete temp;
    cout<<"\n First Node deleted";
}
void doublylist::ddeleteend(){
    doublynode *temp;
    temp=tail;
    tail=temp->prev;
    tail->next=NULL;
    delete temp;
    cout<<"\n last Node deleted"; 
}
void doublylist::ddeletebtw(){
    doublynode *temp;
    int i;
    cout<<"\n Enter which element you want to delete:";
    temp=head;
    cin>>i;
    if(temp->data!=i){
       do{
           temp=temp->next;
       }    while(temp->data!=i);
    }
   
    if(temp==tail){        
        tail=temp->prev;
        tail->next=NULL;
        delete temp;
        cout<<"\n Node deleted";        
    }
    else{
        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
        delete temp;
        cout<<"\n Node deleted";        
    }
}
int main(){
    doublylist link;
    link.dinsertend(12);
    link.dinsertbeg(9);
    link.dinsertend(3);
    link.dinsertbeg(88);
    link.dinsertend(001);
    link.fdisplay();
    link.dinsertafter(56);
    link.fdisplay();
    link.dinsertafter(90);
    link.fdisplay();
    link.bdisplay();  
    link.ddeletebeg();
    link.fdisplay();
    link.ddeleteend();  
    link.fdisplay();
    link.ddeletebtw();
    link.fdisplay();
    
    getch();
    return 0;    
}