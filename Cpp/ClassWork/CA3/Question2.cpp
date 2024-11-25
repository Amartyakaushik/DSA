#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right =  nullptr;
    }
};

Node* insert(Node* root, int key){
    if(root == nullptr){
        root = new Node(key);
    }

    if(key < (root -> left)){
        root -> left = insert(root-> left, key);
    }else if(key > (root -> left)){
        root -> right = insert(root -> right, key);
    }
    else{
        return root;
    }
}

void inOrder(Node* root){
    if(root == nullptr){
        cout<<"Tree is empty"<<endl;
        return;
    }
    inOrder(root-> left);
    cout<<root-> data<<" ";
    inOrder(root-> right);

}

int main(){
    Node* root = nullptr;
}