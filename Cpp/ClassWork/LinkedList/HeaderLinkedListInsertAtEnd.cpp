#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

Node* createNode(int value){
    Node* newNode = new Node();
    newNode -> data = value;
    newNode -> next = nullptr;
}

Node* insertAtEnd(Node* header,int value){
    Node* newNode = createNode(value);
    Node* current = header ;

    while(current -> next != nullptr){
        current = current -> next;
    }
    current -> next = newNode;
    header->data += 1;
    return header;
}

void printList(Node* header){
    // Node* temp = header ;
    Node* temp = header -> next;
    while(temp  != nullptr){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }cout<<endl;
}

int main(){
    Node* header = new Node();
    header -> data = 0;
    header -> next = nullptr;

    header = insertAtEnd(header, 300);
    header = insertAtEnd(header, 340);
    header = insertAtEnd(header, 342);
    printList(header);
}