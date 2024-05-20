#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
int middlefind(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
node* reverseRecurssion(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverseRecurssion(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;

}
node* reverse(node* &head){
    node* current=head;
    node* prev=NULL;
    node* next=NULL;

    while(current!=NULL){
        next=current->next;
        current->next=prev;
        
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}
void DeleteAtHead(node* &head){
   
        node* n=head;
        head=head->next;
        delete n;
    
}
void deletion(node* &head,int val ){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
       DeleteAtHead(head);
       return;
    }
    node* temp=head;
    while(temp->next->data!=val){
      temp=temp->next;
      
    } 
    node* n=temp->next;
    temp->next=temp->next->next;
    delete n;
}
void inserAtHead(node* &head,int val){
   node* n= new node(val);
   n->next=head;
   head=n;
}
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
     if(head==NULL){
            head=n;
            return;
        }
    while(temp->next!=NULL){
           temp=temp->next;
    }
     temp->next=n;
         }
   
void print(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{

    node* head=NULL;
    insertAtTail(head,4);
    insertAtTail(head,6);
    insertAtTail(head,8);
    insertAtTail(head,3);
    inserAtHead(head,0);
    print(head);
    // DeleteAtHead(head);
    // deletion(head,3);
    //   print(head);
    // node* n=reverseRecurssion(head);
    // print(n);
    cout<<middlefind(head);
    return 0;
}
