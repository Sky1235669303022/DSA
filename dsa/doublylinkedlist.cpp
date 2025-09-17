#include <iostream>
using namespace std;
struct Node
{
    /* data */ int data;
    Node*prev;
    Node*next;
};
void insertatbegining(Node*&head,int val){
    Node*newNode=new Node();
    newNode->data=val;
    newNode->prev=NULL;
    newNode->next=head;
    if(head!=NULL){
        head->prev=newNode;
        head=newNode;
    }
}
void insertatend(Node*&head,int val){
    Node*newNode=new Node();
    newNode->data=val;
   
    newNode->next=NULL;
    if(head==NULL){
        newNode->prev=NULL;
        head=newNode;
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        /* code */
    }
    temp->next=newNode;
    newNode->prev=temp;
    

}
void displayforward(Node*&head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"null"<<endl;
}
void displaybackward(Node*&head){
    if(head==NULL){
        return;
    }
    while(head->next!=NULL){
        head=head->next;

    }
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->prev;
    }
    cout<<"NULL"<<endl;

}
int main(){
    Node*head=NULL;
    insertatbegining(head,30);
    insertatbegining(head,20);
    insertatbegining(head,10);
    insertatend(head,40);
    insertatend(head,40);
    cout<<"forward display";
    displayforward(head);
    cout<<"backward display";
    displaybackward(head);
    return 0;
}