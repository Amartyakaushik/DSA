#include<iostream>
using namespace std;
struct Node {
    int data;
    int priority;
    Node* next;
};

void enQueue(Node* head, int data, int priority){
    Node* newNode = createNode(data, priority);
    if(*head == nullptr || (*head) -> priority > priority){
        newNode -> next = *head;
        *head = newNode;
    }else{
        Node* current = *head;
        while(temp -> next != nullptr && current -> next -> priority <= priority){
            current = current -> next;
        }
        newNode -> next = current -> next;
        current -> next = newNode;
    }
}

void dequeue(Node* head){
    if(*head == nullptr){
        cout<<"Queue is empty"<<endl;

    }else{
        Node* temp = head;
        head = head -> next;
        delete(temp);
    }
}

int isEmpty(Node* head){
    return head == nullptr;
}

int isFull(Node* head){
    return 
}