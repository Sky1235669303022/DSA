#include<iostream>
using namespace std;
# define SIZE 100
class Queue{
    int arr[SIZE];
    int front ,rear;
    public:
    Queue(){
        front=rear=-1;
    }
    void enqueue(int x){
        if(rear==SIZE-1){
            cout<<"queue is full\n";
            return;
        }
        if(front==-1)front=0;
            arr[++rear]=x;
            cout<<x<<"inserted"<<endl;;
        }
        void dequeue(){
            if(front==-1||front>rear){
                cout<<"queue is empty\n";
                return;
            }
            cout<<arr[front++]<<"removed\n";
        }
     void peek()
   {
    if (front==1||front>rear){
        cout<<"queue is empty\n";
        return;

    }
    cout<<"front:"<<arr[front]<<endl;
   }     
    
    bool isempty(){
        return front==-1||front>rear;
    }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.peek();
    return 0;

}