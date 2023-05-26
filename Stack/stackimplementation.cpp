#include<iostream>
#include<stack>
using namespace std;


class Stack{

public:
    int size;
    int *arr;
    int top;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void pop(){
        if(top>=0)
        {
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }

    }

    void push(int element){
        if(size-top>1)
        {
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }

    }

    int peek(){
        if(top>=0 )
        return arr[top];

        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }

    }

    bool isempty(){
        if(top==-1)
        {
           return true;
        }
        else{
            return false;
        }
    
    }
};




int main(){

    Stack s(5);
    s.push(34);
    s.push(9);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;



    return 0;
}


