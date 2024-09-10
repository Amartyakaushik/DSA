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

node* insertAtBeg(node* header, int value){
    node* newNode = createNode(value);
    newNode -> next = header;
    header -> prev = newNode;
    header = newNode;
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

    header = insertAtBeg(header,23);
    header = insertAtBeg(header,233);
    header = insertAtBeg(header,234);
    header = insertAtBeg(header,235);
    printList(header);
    return 0;
}
