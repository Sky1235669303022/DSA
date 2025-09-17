#include<iostream>
using namespace std;
 struct Node{
    int data;
    Node*next;
};
void insertatbegining(Node*&head,int value){
    Node*newNode=new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;

}
void insertatend(Node*&head,int value){
    Node*newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    if (head==NULL){
        head=newNode;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertatposition(Node*&head,int value,int pos){  
    Node*newNode=new Node();
    newNode->data=value;
    if (pos==1){
           newNode->next=head;
        head=newNode;
    }
    Node*temp=head;
    for(int i=1;pos-1 &&temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"position out of bounds"<<endl;
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;

}
void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
     head=head->next;
       }
       cout<<"NULL"<<endl;
}


void deletefrombegining(Node*&head){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    Node*temp-head;
    head=head->next;
    delete temp;
}
void deletefromend(Node*&head){
    if(head==NULL)
{
    cout<<"list is empty"<<endl;
    return ;
}
  if(head->next==NULL){
    delete head;
    head=NULL;
    return;
  }
  Node*head=temp;
  while(temp->next->next!=NULL){
    temp=temp-next;
  }
  delete temp->next;
  temp->next=NULL:
}
void deleteatposition(Node*&head,int pos){
       if(head==NULL)
{
    cout<<"list is empty"<<endl;
    return ;
}
if (pos==1)
{
    Node*temp=head;
    head=head->next;
    delete temp;
    return;
    /* code */
}
Node*tmep=head;
for(int i=1;i<pos-1&&temp->next!=NULL;i++){
    temp=temp->next;
}
if(temp->next==NULL){
    cout<<"position out of bounds";
    return;
}
Node*delNode=temp->next;
temp->next=delNode->next;
delete delNode;
}
int main(){
    Node*head=NULL;
    insertatbegining(head,30);
   insertatbegining(head,20);
      insertatbegining(head,10);
       insertatend(head,40);
       insertatposition(head,50,3);
    display(head);
    deletefrombegining(head);
    display(head);
    deletefromend(head);
    display(head);
    deleteatposition(head,3);
    display(head);
    return 0;
}