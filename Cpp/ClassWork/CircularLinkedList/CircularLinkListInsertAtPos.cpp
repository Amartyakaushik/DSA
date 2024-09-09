#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};

node* createNode(int value){
    node* newnode= new node();
    newnode->data= value;
    newnode->next= nullptr;
    return newnode;
}

node* insertAtPos(node* header,int position,int value){
    node* newnode = createNode(value);
    if(position == 1){
        header -> next = newnode;
        newnode -> next = header;
    }
        
    else {
        node* current = new node();
        current = header;
        for(int i =1; i<position; i++){
            current = current -> next;
        }
        newnode -> next = current -> next;
        current -> next = newnode;
    
    }
    header->data+=1;
    return header;
}
void printList(node* header){
    node* current = header -> next;
    cout<<"List: "<<" "<<"("<<header->data<<") ";
    while(current != header){
        cout<< current -> data<<" ";
        current = current -> next;
    }cout<<endl;
}

int main(){
    node* header = new node();
    header->data =0;
    header->next = nullptr;
    
    header = insertAtPos(header,1,10);

    header = insertAtPos(header,2,20);
    printList(header);

    header = insertAtPos(header,2,30);
    printList(header);

    header = insertAtPos(header,2,40);
    printList(header);


    return 0;
}
