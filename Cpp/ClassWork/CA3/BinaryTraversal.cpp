#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

void inOrder(Node* root){
    if(root == nullptr){
        return;
    }

    inOrder(root->left);
    cout<<root-> data<<" ";
    inOrder(root->right);
}


void preOrder(Node* root){
    if(root == nullptr){
        return;
        }

        cout<<root-> data << " ";
        preOrder(root->left);
        preOrder(root->right);
}
void postOrder(Node* root){
    if(root == nullptr){
        return;
        }

        postOrder(root->left);
        postOrder(root->right);
        cout<<root-> data << " ";
}



int main(){
    Node* root = new Node(1);
    root-> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);


    inOrder(root);
    cout<<"Inorder"<<endl;
    preOrder(root);
    cout<<"preOrder"<<endl;
    postOrder(root);
    cout<<"postOrder"<<endl;


}