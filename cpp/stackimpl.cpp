#include<iostream>
using namespace std;

class Stack{

public:
int top;
int *arr;
int size;

Stack(int size){
    this->size=size;
    arr=new int[size];
    top=-1;
}

 void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"Stack Overflow";
    }
}
int pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"Stack Underflow";

    }
}
int peek(){
    if(top>=0){
       return arr[top];
    }
    else{
      return -1;
    }
}
bool empty(){
    if(top==-1){
        cout<<"Stack is Empty";
    }
    else{
        cout<<"Stack is Not empty";
    }
}

};

int main()
{
    Stack st(4);
    st.push(6);
    st.push(8);
    st.push(3);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl; 

    return 0;
}
