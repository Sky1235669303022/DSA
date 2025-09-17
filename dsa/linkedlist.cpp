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
int main(){
    Node*head=NULL;
    insertatbegining(head,30);
   insertatbegining(head,20);
      insertatbegining(head,10);
       insertatend(head,40);
       insertatposition(head,50,3);
    display(head);
    return 0;
}