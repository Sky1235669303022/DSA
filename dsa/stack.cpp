#include<iostream>
using namespace std;
# define SIZE 100
class stack{
    private:
    int arr[SIZE];
    int top;
public:
stack(){
    top=-1;
}
    void push(int x){
        if(top>=SIZE-1){
            cout<<"stack is overflow"<<endl;
            return ;
        }
        arr[++top]=x;
    }
    void pop(){
        if(top<0){
            cout<<"stack is underflow"<<endl;
            return ;
        } top--;
    }
    int peek(){
        if(top){
            cout<<"stack is empty"<<endl;
        return -1 ;        }
    

    return arr[top];}
    bool isempty(){
        return (top<0);
    }
    void display(){
        if(top<0){
            cout<<"stack is empty"<<endl;
            return;
        }
        for(int i=top;i>0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<"<-top"<<endl;
    }
        
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.display();
    cout<<"top:"<<st.peek()<<endl;
    st.pop();
    st.display();
    return 0;
}