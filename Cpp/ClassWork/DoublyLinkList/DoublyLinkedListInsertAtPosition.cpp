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

node* insertAtPosition(node* header, int position, int value){
    node* newNode = createNode(value);
    if(position == 1){
    newNode -> next = header;
    header -> prev = newNode;
    // header = newNode;
    }else{
        node* current = header;
        while(position > 2){
            current = current -> next;
            position--;
        }
        newNode -> next = current -> next;
        current -> next -> prev = newNode;
        current -> next = newNode;
        newNode -> prev = current;
    }
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

    header = insertAtPosition(header,2,23);
    header = insertAtPosition(header,3,233);
    header = insertAtPosition(header,4,234);
    header = insertAtPosition(header,5,235);
    printList(header);
    return 0;
}
