// // // #include<iostream>
// // // #include<iomanip>
// // // using namespace std;

// // // void bubbleSort(float arr[], int n){
// // //         bool yes = false;
// // //     for(int i = 0; i < n ; i++){
// // //         for(int j = 0; j<n-i-1; j++){
// // //             if(arr[j] > arr[j+1] ){
// // //                 int temp = arr[j];
// // //                 arr[j] = arr[j+1];
// // //                 arr[j+1] = temp;
// // //                 yes = true;
// // //             }
// // //         }
        
// // //         if(yes){
            
// // //         cout<<"After iteration "<<i + 1<<": ";
// // //         for(int k = 0; k<n; k++){
// // //             cout<<fixed<<setprecision(2)<<arr[k]<<" ";
// // //         }
// // //         cout<<endl;
// // //         yes = false;
// // //         }
// // //     }
// // // }
// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //     float arr[n];
// // //     for(int i = 0; i < n; i++){
// // //         cin>>arr[i];
// // //     }
    
// // //     bubbleSort(arr, n);
// // //     cout<<"Sorted array: ";
// // //         for(int k = 0; k<n; k++){
// // //             cout<<fixed<<setprecision(2)<<arr[k]<<" ";
// // //         }
// // //         cout<<endl;
    
    
// // // }

// // #include<iostream>
// // using namespace std;
// // void insertionSort(int arr[], int size){
// //     for(int i = 1; i< size ; i++){
// //         int j = i -1;
// //         int key = arr[i];
// //         while(arr[j] > key && j >= 0){
// //             arr[j + 1] = arr[j];
// //             j--;
// //         }
// //         arr[j+1] = key;
// //     }
// //     // for(int i = 1; i<size; i++){
// //     //     cout<<arr[i]<<" ";
// //     // }
// // }

// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i = 1; i<n; i++){
// //         cin>>arr[i];
// //     }
// //     insertionSort(arr,n);
// //     for(int i = 1; i<n; i++){
// //         cout<<arr[i]<<" ";
// //     }
    
// // }


// // #include<iostream>
// // using namespace std;
// // void insertionSort(int arr[], int size){
// //     for(int i = 1; i< size ; i++){
// //         int j = i -1;
// //         int key = arr[i];
// //         while(j >= 0 && arr[j] > key ){
// //             arr[j + 1] = arr[j];
// //             j--;
// //         }
// //         arr[j+1] = key;
// //     }
// // }

// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i = 0; i<n; i++){
// //         cin>>arr[i];
// //     }
// //     insertionSort(arr,n);
// //     for(int i = 0; i<n; i++){
// //         cout<<arr[i]<<" ";
// //     }
    
// // }

// #include<iostream>
// #include<string>
// using namespace std;
// struct node{
//     string data;
//     struct node* next;
// };

// struct node* createNode(string value){
//     struct node* newNode = (struct node*)malloc(sizeof(struct node));
//     newNode -> data = value;
//     newNode -> next = nullptr;
//     return newNode;
// }

// struct node* insertAtBeg(struct node* head, string value){
//     struct node* newNode = createNode(value);
//     // struct node* current = head;
    
    
//     newNode -> next = head;
//     head = newNode;
//     return head;
// }

// struct node* insertAtPosition(struct node* head, string value, int position){
//     if(position == 1){
//         head = insertAtBeg(head,value);
//         return head;
//     }
//     struct node* newNode = createNode(value);
//     struct node* current = head;
//     for(int i = 1; i<position-1 && current != nullptr; i++){
//         current = current -> next;
//     }
    
    
    
//     newNode -> next = current -> next;
//     current -> next = newNode;
//     return head;
// }

// void printList(struct node* head){
//     struct node* current = head;
//     while(current -> next != NULL){
//         cout<<current -> data << " ";
//         current = current -> next;
//     }cout<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     cin.ignore();
//     struct node* head = nullptr;
//     string s;
//     for(int i = 0; i<n; i++){
//         // cin>>s;
//         getline(cin,s);
//         head = insertAtBeg(head,s);
//     }
//     printList(head);
    
//     int pos;
//     string key;
//     cin>>pos;
//     cin.ignore();
//     getline(cin, key);
//     head = insertAtPosition(head, key, pos);
//     printList(head);
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

// Node structure for the linked list
struct node {
    string data;    // Changed data type to string
    struct node* next;
};

// Create a new node
struct node* createNode(string value) {
    struct node* newNode = new node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;  // Added return statement
}

// Insert a node at the beginning of the list
struct node* insertAtBeg(struct node* head, string value) {
    struct node* newNode = createNode(value);
    newNode->next = head;  // Point to the current head
    head = newNode;        // Update head
    return head;
}

// Insert a node at a specific position
struct node* insertAtPosition(struct node* head, string value, int position) {
    if (position == 1) {
        return insertAtBeg(head, value);  // Insert at the beginning
    }

    struct node* newNode = createNode(value);
    struct node* current = head;

    // Traverse to the node just before the desired position
    for (int i = 1; i < position - 1 && current != nullptr; i++) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Position out of bounds." << endl;
        return head;
    }

    newNode->next = current->next;
    current->next = newNode;
    return head;
}

// Print the linked list
void printList(struct node* head) {
    struct node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();  // Ignore leftover newline character from previous input
    struct node* head = nullptr;
    string s;

    // Reading initial contacts and creating the linked list
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        head = insertAtBeg(head, s);
    }

    int pos;
    string key;

    cin.ignore();  // Ignore leftover newline character from previous input
    getline(cin, key);
    cin >> pos;

    // Insert the new contact at the specified position
    head = insertAtPosition(head, key, pos);

    // Print the updated list of contacts
    printList(head);

    return 0;
}
