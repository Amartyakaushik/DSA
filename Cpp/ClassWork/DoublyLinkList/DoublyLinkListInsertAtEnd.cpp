#include <bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
};

// node* CreateNode(node* header,int value){
node* createNode(int value){
    node* newnode= new node();
    newnode->data= value;
    newnode -> prev = nullptr;
    newnode->next= nullptr;
    return newnode;
}

node* insertAtEnd(node* header, int value){
    node* newNode = createNode(value);
    if(header -> next == nullptr){
        header -> next = newNode;
        newNode -> prev = header;
        return header;
    }
    node* current = header;
    while(current -> next != nullptr){
        current = current -> next;
    }
    current -> next = newNode;
    // newNode -> next = header;
    newNode -> prev = current;
    return header;
}
void printList(node* header){
    node* current = header;
    while(current != nullptr){
        cout<< current -> data<<" ";
        current = current -> next;
    }cout<<endl;
}

void traverse_backward(node* header){
    node* current = header;
    while(current  != nullptr){
        cout<<current -> data<<" ";
        current = current -> prev;
    }cout<<endl;
}

int main(){
    node* header = createNode(10);
    node* second = createNode(20);
    node* third = createNode(40);

    header -> next = second;
    second -> prev = header;
    second -> next = third;
    third -> prev = second;

    printList(header);
    traverse_backward(third);

    header = insertAtEnd(header,23);
    header = insertAtEnd(header,233);
    header = insertAtEnd(header,234);
    header = insertAtEnd(header,235);
    printList(header);
    return 0;
}
