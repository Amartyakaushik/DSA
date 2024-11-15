#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

Node* createNode(Node* header, int value){
    Node* newNode = new Node();
    newNode -> data = value;
    newNode -> next = nullptr;
}

Node* insertAtBeg(Node* header,int value){
    Node* newNode = createNode(header, value);
    newNode -> next = header -> next;
    header -> next = newNode;
    header->data += 1;
    return header;
}

void printList(Node* header){
    Node* temp = header -> next;
    while(temp -> next != header){
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
}
