#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
struct Stack{
    Node* top;
};
Node* CreateNode(int value){
    Node* newNode = new Node();
    newNode -> data = value;
    newNode -> next = nullptr;
    return newNode;
}
Stack* createStack(){
    Stack* s = new Stack();
    s -> top = nullptr;
    return s;
}
int isEmpty(Stack* s){
    return s -> top == nullptr;
}
void push(Stack* s, int value){
    Node* newNode = CreateNode(value);
    if(isEmpty(s)){
        s -> top = newNode;
        cout<<"New Node is inserted as "<<value<<endl;
    }else{
        newNode -> next = s -> top;
        s -> top = newNode;
        cout<<"New Node is inserted as "<<value<<endl;

    }
}

void pop(Stack* s){
    if(isEmpty(s)){
        cout<<"Stack is already empty..."<<endl;
        return;
    }
    Node* topp = s -> top;
    int deleteElement = topp -> data;
    s -> top = topp -> next;

    cout<<"Deleted successfully "<<deleteElement<<endl;
    delete topp;
    // s -> top -> 
}

void peek(Stack* s){
    if(isEmpty(s)){
        cout<<"No more element to peek"<<endl;
        return ;
    }else{
        cout<<"Top element is " << s -> top -> data<<endl;
    }
}

void display(Stack* s){
    Node* temp = s -> top;
    while(temp != nullptr){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }cout<<endl;
}
int main(){
    Stack* s = createStack();
    // Node head = createNode(23);
    push(s,233);
    push(s,2334);
    push(s,2335);
    
    display(s);

    pop(s);
    peek(s);
    pop(s);
    peek(s);
    pop(s);
    peek(s);

}
