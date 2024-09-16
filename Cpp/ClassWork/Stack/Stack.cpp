#include<iostream>
using namespace std;

#define MAX 100
struct Stack{
    int top;
    int arr[MAX];
};

void initStack(Stack* &stack){
    stack-> top = -1;
}

int isEmpty(Stack* &stack){
    return stack-> top == -1;
}

int isFull(Stack* &stack){
    return stack-> top == MAX -1;
}

void push(Stack* &stack, int value){
    if(isFull(stack)){
        cout<<"Stack is full..."<<endl;
        return;
    }
    cout<<"Successfully inserted "<<value<<endl;
        int index = stack -> top++;
        stack -> arr[index] = value;
}

void pop(Stack* &stack){
    if(isEmpty(stack)){
        cout<<"Stack is already empty..."<<endl;
        return;
    }else{
        cout<<"Successfully deleted "<<endl;
        // delete stack->arr[stack->top--];
        cout<<"Deleted: "<< stack->arr[stack->top--]<<endl;
    }
}

int peek(Stack* &stack){
    if(isEmpty(stack)){
        cout<<"The stack is already empty..."<<endl;
        // return;
    }else{
        return stack -> arr[--stack-> top];
    }
}
int main(){
    Stack* s = new Stack();
    initStack(s);
    push(s,32);
    push(s,322);
    push(s,323);
    push(s,3232);
    push(s,3235);

    delete(s);
    delete(s);
    int data = peek(s);
    cout<<data;
}

/*
initStack()
isEmpty()
isFull()
push()
pop()
peek()*/