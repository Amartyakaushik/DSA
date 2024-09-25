#include<iostream>
using namespace std;
#define MAX 10

struct Queue{
    int arr[MAX];
    int rear;
    int front;
};

void initQueue(Queue* queue){
    queue->rear = -1;
    queue->front = -1;
}

int isFull(Queue* queue){
    return (queue->rear == MAX -1);
}
int isEmpty(Queue* queue){
    // return (queue->rear == -1 );
    return (queue->front > queue->rear || queue->front == -1);
}

Queue* Dequeue(Queue* queue){
    if(isEmpty(queue)){
        return NULL;
    }else{
        if(queue->front == queue->rear){
            queue->front = queue->rear = -1;
        }
        queue->front++;
        return queue;
    }
}

Queue* Enqueue(Queue* queue, int data){
    // Queue* newData = new Queue();
    // newData->arr[++rear] = data;

    if(isFull(queue)){
        cout<<"Queue is full"<<endl;
        // return;
    }
    if(queue->front == -1){
        queue->front = 0;
    }
    queue->arr[++queue->rear] = data;
    return queue;
}

void printQueue(Queue* queue){
    if(isEmpty(queue)){
        cout<<"Queue is empty"<<endl;
    }
    else{
        for(int i = queue->front; i<=queue->rear; i++){
            cout<<queue->arr[i]<<" ";
        }cout<<endl;
    }
}
int main(){
    Queue* queue = new Queue();
    initQueue(queue);

    queue = Enqueue(queue,23);
    queue = Enqueue(queue,234);
    queue = Enqueue(queue,235);
    queue = Enqueue(queue,2356);
    queue = Enqueue(queue,23567);
    printQueue(queue);

    queue = Dequeue(queue);
    printQueue(queue);
    queue = Dequeue(queue);
    printQueue(queue);
    queue = Dequeue(queue);
    printQueue(queue);
    queue = Dequeue(queue);
    printQueue(queue);
    queue = Dequeue(queue);
    printQueue(queue);
    queue = Dequeue(queue);
    printQueue(queue);

}