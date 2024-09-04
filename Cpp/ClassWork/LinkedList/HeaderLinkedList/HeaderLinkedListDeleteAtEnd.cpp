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
    Node* newNode = createNode( value);
    newNode -> next = header -> next;
    header -> next = newNode;
    header->data += 1;
    return header;
}
Node* deleteAtEnd(Node* header){
    if(header -> next == nullptr){
        return nullptr;
    }
    Node* second_last = header ;
    while(second_last -> next -> next != nullptr){
        second_last = second_last -> next;
    }
    Node* delete_ELem = second_last -> next ;
    second_last -> next = nullptr;

    delete delete_ELem;
    header->data -= 1;
    return header;
}

void printList(Node* header){
    Node* temp = header -> next;
    while(temp != nullptr){
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
    header = insertAtBeg(header, 330);
    header = insertAtBeg(header, 333);
    printList(header);

    header = deleteAtEnd(header);
    printList(header);
    header = deleteAtEnd(header);
    printList(header);
}