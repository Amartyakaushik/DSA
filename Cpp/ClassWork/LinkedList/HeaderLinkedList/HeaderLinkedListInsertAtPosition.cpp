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
Node* insertAtBeg(Node* header,int value){
    Node* newNode = createNode(value);
    newNode -> next = header -> next;
    header -> next = newNode;
    header->data += 1;
    return header;
}
Node* insertAtPosition(Node* header, int position, int value){
    Node* newNode = createNode(value);
    Node* current = header ;
    for(int i = 1; i<position; i++){
        // if(current -> next == nullptr){
        //     break;
        // }
        current = current -> next;
    }
    newNode -> next = current -> next;
    current -> next = newNode;
    header->data += 1;
    return header;
}

void printList(Node* header){
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

    header = insertAtBeg(header, 200);
    header = insertAtBeg(header, 220);
    header = insertAtBeg(header, 222);
    printList(header);

    header = insertAtPosition(header,2, 400);
    header = insertAtPosition(header,2, 420);
    header = insertAtPosition(header,4, 422);
    printList(header);
}