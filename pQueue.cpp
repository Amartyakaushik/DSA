#include<iostream>
using namespace std;
#define MAX 100
typedef struct{
    int data[MAX];
    int priority[MAX];
    int size;
} PriorityQueue;

void initQueue(PriorityQueue* pq){
    pq -> size = 0;
}

int isEmpty(PriorityQueue* pq){
    return pq -> size == 0;
}

int isFull(PriorityQueue* pq){
    return pq -> size == MAX;
}

void enQueue(PriorityQueue* pq, int value, int priority){
    if(isFull(pq)){
        cout << "Queue is full" <<endl;
        return;
    }
    pq -> data[pq -> size] = value;
    pq -> size++;
}

int getHighestPriorityIndex(PriorityQueue* pq){
    int maxPriority = INT_MIN;
    int index = -1;
    
    for(int i = 0; i < pq -> size; i++){
        if(pq -> priority[i] > maxPriority){
            maxPriority = pq -> priority[i];
            index = i;
        }
    }
    return index;
}

int dequeue(PriorityQueue* pq){
    if(isEmpty(pq)){
        cout<< "Priort queue is already empty"<<endl;
        return -1;
    }

    int index = getHighestPriorityIndex(pq);
    int value = pq -> data[index];

    for(int i = index; i < pq -> size; i++){
        pq -> data[i] = pq -> data[i + 1];
        pq -> priority[i] = pq -> priority[i + 1];
    }
    pq -> size--;
    return value;
}

void display(PriorityQueue* pq){
    if(isEmpty(pq)){
        cout<< "Queue is already empty"<<endl;
        return;
    }


}

int main(){
    
}