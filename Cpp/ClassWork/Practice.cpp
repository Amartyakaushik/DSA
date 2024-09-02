#include<iostream>
using namespace std;
// LinkedList
struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;
}

struct Node* insertAtBeg(struct Node* head, int value){
    struct Node* current = head;
    struct Node* newNode = createNode(value);
    newNode -> next = current;
    head = newNode;
    return head;
}

struct Node* insertAtEnd(struct Node* head , int value){
    struct Node* newNode = createNode(value);
    if(head == NULL){
        return newNode;
    }
    struct Node* current = head;
    while(current -> next != NULL){
        current = current -> next;
    }
    current -> next = newNode;
    return head;
}

struct Node* insertAtPosition(struct Node* head, int value , int position){
    if(position == 1){
        head = insertAtBeg(head,value);
        return head;
    }
    struct Node* newNode = createNode(value);
    struct Node* current = head;
    for(int i = 1; i<position; i++){
        current = current -> next;
    }
    newNode -> next = current -> next;
    current -> next = newNode;
    return head;
}
struct Node* printList(struct Node* head){
    struct Node* current = head;
    do{
        cout<<current -> data<<" ";
        current = current -> next;
    }while(current -> next != NULL);
    cout<<endl;
}
int main(){
    struct Node* head = createNode(12);
    head = insertAtBeg(head,123);
    head = insertAtBeg(head,1234);
    head = insertAtBeg(head,12345);
    printList(head);

    head = insertAtEnd(head,987);
    head = insertAtEnd(head,984);
    printList(head);

    head = insertAtPosition(head,34598,2);
    head = insertAtPosition(head,876,3);
    printList(head);
}
