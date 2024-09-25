#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
struct Queue{
    Node* front;
    Node* rear;
};

Node* createNode(int value){
    Node* newNode = new Node();
    newNode -> data = value;
    newNode -> next = nullptr;
    return newNode;
}

Queue* createQueue(Queue* queue){
    // Queue* queue = new Queue();
    queue -> front = nullptr;
    queue -> rear = nullptr;
    return queue;
}

bool isEmpty(Queue* queue){
    return queue -> front == nullptr;
}

Queue* Enqueue(Queue* queue, int value){
    Node* newNode = createNode(value);
    if(isEmpty(queue)){
        queue -> front = newNode;
        queue -> rear = newNode;
        // return;
    }else{
        queue -> rear -> next = newNode;
        queue -> rear = newNode;
    }
    cout<<"Done"<<endl;
    return queue;
}

Queue* Dequeue(Queue* queue){
    if(isEmpty(queue)){
        cout<<"Queue is already empty!"<<endl;
    }else{
        Node* temp = queue -> front;
        queue -> front = queue -> front -> next;
        delete temp;
    }
    return queue;
}
void printQueue(Queue* queue){
    Node* temp = queue -> front;
    while(temp != nullptr){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }cout<<endl;
}
int main(){
    Queue* queue = createQueue(queue);
    queue = Enqueue(queue, 12);
    queue = Enqueue(queue, 123);
    queue = Enqueue(queue, 3442);
    queue = Enqueue(queue, 8765);
    printQueue(queue);

    queue = Dequeue(queue);
    printQueue(queue);

}