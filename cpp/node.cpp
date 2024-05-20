#include<iostream>
using namespace std;
class node
{

public:
    int val;
    node* next;
    node(int data){
        val=data;
        node* next=NULL;
    }
   
};

void insertAtHead(node* &head,int val){
    node* n= new node(val);
    n->next=head;
    head=n;

}
void insertAtTail(node* &head,int val){
    node* temp=head;
    while(temp->next!=NULL){
        
       temp= temp->next;
       

    }
    node* n=new node(val);
    temp->next=n;
     n->next=NULL;
    
}
void insertAtPos(node* &head,int pos,int val){
    if(pos==0){
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    int curr_pos=0;
    while(curr_pos!=pos-1){
        temp=temp->next;
        curr_pos++;
    }
    node* n=new node(val);
    
    n->next= temp->next;
    temp->next=n;


}
void update(node* &head,int pos,int val){
    int curr_pos=0;
    node* temp=head;
    while (curr_pos!=pos)
    {
     temp=temp->next;
        curr_pos++;
    }
    temp->val=val;
    
}
void deleteAtHead(node* &head){
    node* n=head;
    head=head->next;
    free(n);


}
void deleteAtTail(node* &head){
    
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
       
    }
   node*n= temp->next;
   temp->next=  NULL;
   free(n);
}
void display(node* head){
node* temp=head;
while(temp!=NULL){
cout<<temp->val<<"->";
temp=temp->next;
}
cout<<"NULL"<<endl;
}


int main()
{
   node* head=NULL;
 insertAtHead(head, 5);
 insertAtHead(head, 7);
 insertAtTail(head,9);
 display(head);
 insertAtPos(head,1,8);
  display(head);
 update(head,0,4);
deleteAtHead(head);
 display(head);
deleteAtTail(head);

 display(head);


    return 0;
}
