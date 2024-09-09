#include <bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};

// node* CreateNode(node* header,int value){
node* CreateNode(int value){
    node* newnode= new node();
    newnode->data= value;
    newnode->next= nullptr;
    return newnode;
}

node* insertatbeg(node* header,int value){
    // node* newnode = CreateNode(header,value);
    node* newnode = CreateNode(value);
    if(header-> next == nullptr){
        header -> next = newnode;
        newnode -> next = header;
    }
        
    else {
        newnode -> next = header -> next;
        header->next=newnode;
    
    }
    header->data+=1;
    return header;
}
void printList(node* header){
    node* current = header -> next;
    // if(current==nullptr){
    //     cout<<"Empty";
    //     return;
    // }
    cout<<"List: "<<" "<<"("<<header->data<<") ";
    while(current != header){
        cout<< current -> data<<" ";
        current = current -> next;
    }
}

int main(){
    node* header = new node();
    header->data =0;
    header->next = nullptr;
    
    header = insertatbeg(header,10);
    printList(header);
    cout<<endl;
    header = insertatbeg(header,20);
    printList(header);
    cout<<endl;
    header = insertatbeg(header,30);
    printList(header);
    cout<<endl;
    header = insertatbeg(header,40);
    printList(header);
    cout<<endl;

    return 0;
}
