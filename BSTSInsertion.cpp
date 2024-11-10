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
    // cout<<"Kaisa";
    if(root == nullptr){
        return;
    }
    inOrder(root -> left);
    cout<<root -> data << " ";
    inOrder(root -> right);
}

Node* searchBST(Node* root, int val){
    if(root == nullptr){
        return nullptr;
    }
    if(root -> data == val){
        return root;
    }else if(root -> data > val){
        return searchBST(root -> left, val);
    }else{
        return searchBST(root -> right, val);
    }
}


Node* insertBST(Node* root, int val){
    if(root == nullptr){
        return new Node(val);
    }

    if(val < root -> data){
        root -> left = insertBST(root -> left, val);
    }else{
        root -> right = insertBST(root -> right , val);
    }

    return root;
}


int main(){
    Node *root = nullptr;

    root = insertBST(root, 23);
    insertBST(root, 3);
    insertBST(root, 21);
    insertBST(root, 13);
    insertBST(root, 32);
    insertBST(root, 11);
    insertBST(root, 21);
    insertBST(root, 19);


    inOrder(root);

    if(searchBST(root,43) != nullptr){
        cout << "Element found" << endl;
    }else{
        cout << "Element not found" << endl;
    }
}
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = right = nullptr;
//     }
// };

// void inOrder(Node* root){
//     // cout<<"Kaisa";
//     if(root == nullptr){
//         return;
//     }
//     inOrder(root -> left);
//     cout<<root -> data << " ";
//     inOrder(root -> right);
// }

// Node* searchBST(Node* root, int val){
//     if(root == nullptr){
//         return nullptr;
//     }
//     if(root -> data == val){
//         return root;
//     }else if(root -> data > val){
//         return searchBST(root -> left, val);
//     }else{
//         return searchBST(root -> right, val);
//     }
// }


// Node* insertBST(Node* root, int val){
//     if(root == nullptr){
//         return new Node(val);
//     }

//     if(val < root -> data){
//         root -> left = insertBST(root -> left, val);
//     }else{
//         root -> right = insertBST(root -> right , val);
//     }

//     return root;
// }


// int main(){
//     Node *root = nullptr;

//     root = insertBST(root, 23);
//     insertBST(root, 3);
//     insertBST(root, 21);
//     insertBST(root, 13);
//     insertBST(root, 32);
//     insertBST(root, 11);
//     insertBST(root, 21);
//     insertBST(root, 19);


//     inOrder(root);

//     if(searchBST(root,43) != nullptr){
//         cout << "Element found" << endl;
//     }else{
//         cout << "Element not found" << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = right = nullptr;
//     }
// };

// void inOrder(Node* root){
//     // cout<<"Kaisa";
//     if(root == nullptr){
//         return;
//     }
//     inOrder(root -> left);
//     cout<<root -> data << " ";
//     inOrder(root -> right);
// }

// Node* searchBST(Node* root, int val){
//     if(root == nullptr){
//         return nullptr;
//     }
//     if(root -> data == val){
//         return root;
//     }else if(root -> data > val){
//         return searchBST(root -> left, val);
//     }else{
//         return searchBST(root -> right, val);
//     }
// }


// Node* insertBST(Node* root, int val){
//     if(root == nullptr){
//         return new Node(val);
//     }

//     if(val < root -> data){
//         root -> left = insertBST(root -> left, val);
//     }else{
//         root -> right = insertBST(root -> right , val);
//     }

//     return root;
// }


// int main(){
//     Node *root = nullptr;

//     root = insertBST(root, 23);
//     insertBST(root, 3);
//     insertBST(root, 21);
//     insertBST(root, 13);
//     insertBST(root, 32);
//     insertBST(root, 11);
//     insertBST(root, 21);
//     insertBST(root, 19);


//     inOrder(root);

//     if(searchBST(root,43) != nullptr){
//         cout << "Element found" << endl;
//     }else{
//         cout << "Element not found" << endl;
//     }
// }
// // #include<iostream>
// // using namespace std;
// // struct Node{
// //     int data;
// //     Node* left;
// //     Node* right;

// //     Node(int val){
// //         data = val;
// //         left = right = nullptr;
// //     }
// // };

// // void inOrder(Node* root){
// //     // cout<<"Kaisa";
// //     if(root == nullptr){
// //         return;
// //     }
// //     inOrder(root -> left);
// //     cout<<root -> data << " ";
// //     inOrder(root -> right);
// // }

// // Node* searchBST(Node* root, int val){
// //     if(root == nullptr){
// //         return nullptr;
// //     }
// //     if(root -> data == val){
// //         return root;
// //     }else if(root -> data > val){
// //         return searchBST(root -> left, val);
// //     }else{
// //         return searchBST(root -> right, val);
// //     }
// // }


// // Node* insertBST(Node* root, int val){
// //     if(root == nullptr){
// //         return new Node(val);
// //     }

// //     if(val < root -> data){
// //         root -> left = insertBST(root -> left, val);
// //     }else{
// //         root -> right = insertBST(root -> right , val);
// //     }

// //     return root;
// // }


// // int main(){
// //     Node *root = nullptr;

// //     root = insertBST(root, 23);
// //     insertBST(root, 3);
// //     insertBST(root, 21);
// //     insertBST(root, 13);
// //     insertBST(root, 32);
// //     insertBST(root, 11);
// //     insertBST(root, 21);
// //     insertBST(root, 19);


// //     inOrder(root);

// //     if(searchBST(root,43) != nullptr){
// //         cout << "Element found" << endl;
// //     }else{
// //         cout << "Element not found" << endl;
// //     }
// // }