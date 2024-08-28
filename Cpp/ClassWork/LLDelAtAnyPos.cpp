#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;

};
struct node* createNode(int value){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = value;
    newNode -> next = NULL;
}

// struct node* deleteAtAnyPosition(struct node* head, int position){
//     struct node* prev;
//     struct node* current = head;

//     if(head == NULL){
//         return head;
//     }
//     // prev -> next = head -> next;
//     if(position == 1){
//         head = deleteFromBeg(head);
//         return head;
//     }

//     for(int i = 1; i<position; i++){
//         prev = current;
//         current = current -> next;
//     }
//     // free(current);

//     if(current != NULL){
//         prev -> next = current -> next;
//         free(prev);
//     }else
//     cout<<"Data not found";
//     return head;

// }

struct node* deleteAtLast(struct node* head){
    if(head == NULL){
        return NULL;
    }

    struct node* second_Last = head;
    while(second_Last -> next -> next != NULL){
        second_Last = second_Last -> next;
    }

    free(second_Last -> next);
    second_Last -> next = NULL;
    return head;

}

struct node* deleteFromBeg(struct node* head){
    if(head == NULL){
        return NULL;
    }

    struct node* current = head;
    head = head->next;
    free(current);
    return head;
}

struct node* insertAtBeg(struct node* head, int value){
    struct node* newNode = createNode(value);
    newNode ->next = head;
    head = newNode;
    return head;
}

struct node* printList(struct node* head){
    struct node* current = head;
    while(current->next != NULL){
        cout<< current->data<<" ";
        current = current-> next;
    }cout<<endl;
}
int main(){
    struct node* head = createNode(1);
    head = insertAtBeg(head, 23);
    head = insertAtBeg(head, 233);
    head = insertAtBeg(head, 2334);
    head = insertAtBeg(head, 2344);
    printList(head);

    head = deleteFromBeg(head);
    printList(head);

    // head = deleteAtAnyPosition(head, 2);
    // head = deleteAtAnyPosition(head, 2);
    // printList(head);
    head = deleteAtLast(head);
    head = deleteAtLast(head);
    printList(head);
    
    
}