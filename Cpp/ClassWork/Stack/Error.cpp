// // // // // // // // // // #include<iostream>
// // // // // // // // // // #include<iomanip>
// // // // // // // // // // using namespace std;

// // // // // // // // // // void bubbleSort(float arr[], int n){
// // // // // // // // // //         bool yes = false;
// // // // // // // // // //     for(int i = 0; i < n ; i++){
// // // // // // // // // //         for(int j = 0; j<n-i-1; j++){
// // // // // // // // // //             if(arr[j] > arr[j+1] ){
// // // // // // // // // //                 int temp = arr[j];
// // // // // // // // // //                 arr[j] = arr[j+1];
// // // // // // // // // //                 arr[j+1] = temp;
// // // // // // // // // //                 yes = true;
// // // // // // // // // //             }
// // // // // // // // // //         }
        
// // // // // // // // // //         if(yes){
            
// // // // // // // // // //         cout<<"After iteration "<<i + 1<<": ";
// // // // // // // // // //         for(int k = 0; k<n; k++){
// // // // // // // // // //             cout<<fixed<<setprecision(2)<<arr[k]<<" ";
// // // // // // // // // //         }
// // // // // // // // // //         cout<<endl;
// // // // // // // // // //         yes = false;
// // // // // // // // // //         }
// // // // // // // // // //     }
// // // // // // // // // // }
// // // // // // // // // // int main(){
// // // // // // // // // //     int n;
// // // // // // // // // //     cin>>n;
// // // // // // // // // //     float arr[n];
// // // // // // // // // //     for(int i = 0; i < n; i++){
// // // // // // // // // //         cin>>arr[i];
// // // // // // // // // //     }
    
// // // // // // // // // //     bubbleSort(arr, n);
// // // // // // // // // //     cout<<"Sorted array: ";
// // // // // // // // // //         for(int k = 0; k<n; k++){
// // // // // // // // // //             cout<<fixed<<setprecision(2)<<arr[k]<<" ";
// // // // // // // // // //         }
// // // // // // // // // //         cout<<endl;
    
    
// // // // // // // // // // }

// // // // // // // // // #include<iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // void insertionSort(int arr[], int size){
// // // // // // // // //     for(int i = 1; i< size ; i++){
// // // // // // // // //         int j = i -1;
// // // // // // // // //         int key = arr[i];
// // // // // // // // //         while(arr[j] > key && j >= 0){
// // // // // // // // //             arr[j + 1] = arr[j];
// // // // // // // // //             j--;
// // // // // // // // //         }
// // // // // // // // //         arr[j+1] = key;
// // // // // // // // //     }
// // // // // // // // //     // for(int i = 1; i<size; i++){
// // // // // // // // //     //     cout<<arr[i]<<" ";
// // // // // // // // //     // }
// // // // // // // // // }

// // // // // // // // // int main(){
// // // // // // // // //     int n;
// // // // // // // // //     cin>>n;
// // // // // // // // //     int arr[n];
// // // // // // // // //     for(int i = 1; i<n; i++){
// // // // // // // // //         cin>>arr[i];
// // // // // // // // //     }
// // // // // // // // //     insertionSort(arr,n);
// // // // // // // // //     for(int i = 1; i<n; i++){
// // // // // // // // //         cout<<arr[i]<<" ";
// // // // // // // // //     }
    
// // // // // // // // // }


// // // // // // // // // #include<iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // void insertionSort(int arr[], int size){
// // // // // // // // //     for(int i = 1; i< size ; i++){
// // // // // // // // //         int j = i -1;
// // // // // // // // //         int key = arr[i];
// // // // // // // // //         while(j >= 0 && arr[j] > key ){
// // // // // // // // //             arr[j + 1] = arr[j];
// // // // // // // // //             j--;
// // // // // // // // //         }
// // // // // // // // //         arr[j+1] = key;
// // // // // // // // //     }
// // // // // // // // // }

// // // // // // // // // int main(){
// // // // // // // // //     int n;
// // // // // // // // //     cin>>n;
// // // // // // // // //     int arr[n];
// // // // // // // // //     for(int i = 0; i<n; i++){
// // // // // // // // //         cin>>arr[i];
// // // // // // // // //     }
// // // // // // // // //     insertionSort(arr,n);
// // // // // // // // //     for(int i = 0; i<n; i++){
// // // // // // // // //         cout<<arr[i]<<" ";
// // // // // // // // //     }
    
// // // // // // // // // }

// // // // // // // // #include<iostream>
// // // // // // // // #include<string>
// // // // // // // // using namespace std;
// // // // // // // // struct node{
// // // // // // // //     string data;
// // // // // // // //     struct node* next;
// // // // // // // // };

// // // // // // // // struct node* createNode(string value){
// // // // // // // //     struct node* newNode = (struct node*)malloc(sizeof(struct node));
// // // // // // // //     newNode -> data = value;
// // // // // // // //     newNode -> next = nullptr;
// // // // // // // //     return newNode;
// // // // // // // // }

// // // // // // // // struct node* insertAtBeg(struct node* head, string value){
// // // // // // // //     struct node* newNode = createNode(value);
// // // // // // // //     // struct node* current = head;
    
    
// // // // // // // //     newNode -> next = head;
// // // // // // // //     head = newNode;
// // // // // // // //     return head;
// // // // // // // // }

// // // // // // // // struct node* insertAtPosition(struct node* head, string value, int position){
// // // // // // // //     if(position == 1){
// // // // // // // //         head = insertAtBeg(head,value);
// // // // // // // //         return head;
// // // // // // // //     }
// // // // // // // //     struct node* newNode = createNode(value);
// // // // // // // //     struct node* current = head;
// // // // // // // //     for(int i = 1; i<position-1 && current != nullptr; i++){
// // // // // // // //         current = current -> next;
// // // // // // // //     }
    
    
    
// // // // // // // //     newNode -> next = current -> next;
// // // // // // // //     current -> next = newNode;
// // // // // // // //     return head;
// // // // // // // // }

// // // // // // // // void printList(struct node* head){
// // // // // // // //     struct node* current = head;
// // // // // // // //     while(current -> next != NULL){
// // // // // // // //         cout<<current -> data << " ";
// // // // // // // //         current = current -> next;
// // // // // // // //     }cout<<endl;
// // // // // // // // }

// // // // // // // // int main(){
// // // // // // // //     int n;
// // // // // // // //     cin>>n;
// // // // // // // //     cin.ignore();
// // // // // // // //     struct node* head = nullptr;
// // // // // // // //     string s;
// // // // // // // //     for(int i = 0; i<n; i++){
// // // // // // // //         // cin>>s;
// // // // // // // //         getline(cin,s);
// // // // // // // //         head = insertAtBeg(head,s);
// // // // // // // //     }
// // // // // // // //     printList(head);
    
// // // // // // // //     int pos;
// // // // // // // //     string key;
// // // // // // // //     cin>>pos;
// // // // // // // //     cin.ignore();
// // // // // // // //     getline(cin, key);
// // // // // // // //     head = insertAtPosition(head, key, pos);
// // // // // // // //     printList(head);
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // #include<iostream>
// // // // // // // #include<string>
// // // // // // // using namespace std;

// // // // // // // // Node structure for the linked list
// // // // // // // struct node {
// // // // // // //     string data;    // Changed data type to string
// // // // // // //     struct node* next;
// // // // // // // };

// // // // // // // // Create a new node
// // // // // // // struct node* createNode(string value) {
// // // // // // //     struct node* newNode = new node;
// // // // // // //     newNode->data = value;
// // // // // // //     newNode->next = nullptr;
// // // // // // //     return newNode;  // Added return statement
// // // // // // // }

// // // // // // // // Insert a node at the beginning of the list
// // // // // // // struct node* insertAtBeg(struct node* head, string value) {
// // // // // // //     struct node* newNode = createNode(value);
// // // // // // //     newNode->next = head;  // Point to the current head
// // // // // // //     head = newNode;        // Update head
// // // // // // //     return head;
// // // // // // // }

// // // // // // // // Insert a node at a specific position
// // // // // // // struct node* insertAtPosition(struct node* head, string value, int position) {
// // // // // // //     if (position == 1) {
// // // // // // //         return insertAtBeg(head, value);  // Insert at the beginning
// // // // // // //     }

// // // // // // //     struct node* newNode = createNode(value);
// // // // // // //     struct node* current = head;

// // // // // // //     // Traverse to the node just before the desired position
// // // // // // //     for (int i = 1; i < position - 1 && current != nullptr; i++) {
// // // // // // //         current = current->next;
// // // // // // //     }

// // // // // // //     if (current == nullptr) {
// // // // // // //         cout << "Position out of bounds." << endl;
// // // // // // //         return head;
// // // // // // //     }

// // // // // // //     newNode->next = current->next;
// // // // // // //     current->next = newNode;
// // // // // // //     return head;
// // // // // // // }

// // // // // // // // Print the linked list
// // // // // // // void printList(struct node* head) {
// // // // // // //     struct node* current = head;
// // // // // // //     while (current != nullptr) {
// // // // // // //         cout << current->data << " ";
// // // // // // //         current = current->next;
// // // // // // //     }
// // // // // // //     cout << endl;
// // // // // // // }

// // // // // // // int main() {
// // // // // // //     int n;
// // // // // // //     cin >> n;
// // // // // // //     cin.ignore();  // Ignore leftover newline character from previous input
// // // // // // //     struct node* head = nullptr;
// // // // // // //     string s;

// // // // // // //     // Reading initial contacts and creating the linked list
// // // // // // //     for (int i = 0; i < n; i++) {
// // // // // // //         getline(cin, s);
// // // // // // //         head = insertAtBeg(head, s);
// // // // // // //     }

// // // // // // //     int pos;
// // // // // // //     string key;

// // // // // // //     cin.ignore();  // Ignore leftover newline character from previous input
// // // // // // //     getline(cin, key);
// // // // // // //     cin >> pos;

// // // // // // //     // Insert the new contact at the specified position
// // // // // // //     head = insertAtPosition(head, key, pos);

// // // // // // //     // Print the updated list of contacts
// // // // // // //     printList(head);

// // // // // // //     return 0;
// // // // // // // }

// // // // // // #include<iostream>
// // // // // // using namespace std;

// // // // // // struct Node{
// // // // // //     int value;
// // // // // //     struct Node* next;
// // // // // // };

// // // // // // Node* createNode(int data){
// // // // // //     Node* newNode = new Node();
// // // // // //     newNode -> value = data;
// // // // // //     newNode -> next = nullptr;
// // // // // //     return newNode;
// // // // // // }

// // // // // // Node* insertAtBeg(Node* head, int data){
// // // // // //     Node* newNode = createNode(data);
// // // // // //     // if(head == nullptr){
// // // // // //     //     return newNode;
// // // // // //     // }
// // // // // //     newNode -> next = head ;
// // // // // //     head = newNode;
// // // // // //     return head;
// // // // // // }

// // // // // // void printUpto(Node* head,int position){
// // // // // //     int sum=0;
// // // // // //     Node* current = head;
// // // // // //     while(position != 0){
// // // // // //         sum +=  current -> value;
// // // // // //         // cout<< current -> value<<" ";
// // // // // //         current = current -> next;
// // // // // //         position--;
// // // // // //     }cout<<sum<<endl;
// // // // // // }

// // // // // // int main(){
// // // // // //     int num,data,position;
// // // // // //     cin>>num;
// // // // // //     Node* head = new Node();
// // // // // //     for(int i = 0; i<num; i++){
// // // // // //         cin>>data;
// // // // // //         head = insertAtBeg(head, data);
// // // // // //     }
// // // // // //     cin>>position;
// // // // // //     printUpto(head, position);
// // // // // //     // printUpto(head);
    
// // // // // // }

// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // struct Node {
// // // // //     int data;
// // // // //     Node* next;
// // // // // };

// // // // // Node* insertNode(Node* head, int data) {
// // // // //     Node* newNode = new Node();
// // // // //     newNode->data = data;
// // // // //     newNode->next = nullptr;

// // // // //     if (head == nullptr) {
// // // // //         head = newNode;
// // // // //     } else {
// // // // //         Node* temp = head;
// // // // //         while (temp->next != nullptr) {
// // // // //             temp = temp->next;
// // // // //         }
// // // // //         temp->next = newNode;
// // // // //     }
// // // // //     return head;
// // // // // }
// // // // // // void insertNode(Node* head, int data) {
// // // // // //     Node* newNode = new Node();
// // // // // //     newNode->data = data;
// // // // // //     newNode->next = nullptr;

// // // // // //     if (head == nullptr) {
// // // // // //         head = newNode;
// // // // // //     } else {
// // // // // //         Node* temp = head;
// // // // // //         while (temp->next != nullptr) {
// // // // // //             temp = temp->next;
// // // // // //         }
// // // // // //         temp->next = newNode;
// // // // // //     }
// // // // // // }

// // // // // Node* deleteEvenPositionNodes(Node* head) {
// // // // //     if(head == nullptr && head -> next == nullptr){
// // // // //         return NULL;
// // // // //     }

// // // // //     int count = 0;
// // // // //     Node* current = head;
// // // // //     Node* prev = nullptr;
// // // // //     while(current != nullptr){
// // // // //         count++;
// // // // //         if(count % 2 == 0){
// // // // //             prev -> next = current -> next;
// // // // //             Node* temp = current;
// // // // //             current = current -> next;
// // // // //             delete (temp);
// // // // //             // current = head;
// // // // //         }else{
// // // // //             prev = current;
// // // // //             current = current -> next;
// // // // //         }
// // // // //     }
// // // // //     return head;
// // // // // }

// // // // // void displayLinkedList(Node* head) {
// // // // //     Node* temp = head;
// // // // //     while (temp != nullptr) {
// // // // //         cout << temp->data << " ";
// // // // //         temp = temp->next;
// // // // //     }
// // // // //     cout << endl;
// // // // // }

// // // // // int main() {
// // // // //     Node* head = nullptr;
// // // // //     int size;

// // // // //     cin >> size;

// // // // //     for (int i = 0; i < size; i++) {
// // // // //         int value;
// // // // //         cin >> value;
// // // // //         // insertNode(head, value);
// // // // //         head = insertNode(head, value);
// // // // //     }

// // // // //     cout << "Original Linked List: ";
// // // // //     displayLinkedList(head);

// // // // //     deleteEvenPositionNodes(head);
// // // // //     // head = deleteEvenPositionNodes(head);

// // // // //     cout << "Final Linked List: ";
// // // // //     displayLinkedList(head);

// // // // //     Node* temp = head;
// // // // //     while (head != nullptr) {
// // // // //         head = head->next;
// // // // //         delete temp;
// // // // //         temp = head;
// // // // //     }

// // // // //     return 0;
// // // // // }

// // // // #include <iostream>
// // // // using namespace std;

// // // // struct Node {
// // // //     int data;
// // // //     Node* next;
// // // // };

// // // // Node* insertNode(Node* head, int data) {
// // // //     Node* newNode = new Node();
// // // //     newNode->data = data;
// // // //     newNode->next = nullptr;

// // // //     if (head == nullptr) {
// // // //         return newNode;
// // // //     } else {
// // // //         Node* temp = head;
// // // //         while (temp->next != nullptr) {
// // // //             temp = temp->next;
// // // //         }
// // // //         temp->next = newNode;
// // // //     }
// // // //     return head;
// // // // }

// // // // Node* deleteNodesInRange(Node* head, int start, int end) {
// // // //     if(head == nullptr && start <= end){
// // // //         return NULL;
// // // //     }
    
// // // //     Node* current = head;
// // // //     Node* previous = nullptr;
// // // //     int pos = 1;

// // // //     while(current != nullptr && pos < start){
// // // //         previous = current;
// // // //         current = current-> next;
// // // //         pos++;
// // // //     }

// // // //     while(current != nullptr && pos <= end){
// // // //         Node* temp = current;
// // // //         current = current -> next;
// // // //         delete temp;
// // // //         pos++;
// // // //     }

// // // //     if(previous == nullptr){
// // // //         return current;
// // // //     }else{
// // // //         previous -> next = current;
// // // //     }
// // // //     return head;
// // // //     // for(int i = start -1; i<end; i++){
// // // //     //     Node* temp = current;
// // // //     //     current = current -> next;
// // // //     //     delete (temp);
// // // //     // }
// // // //     // return head;
    
// // // // }

// // // // void displayLinkedList(Node* head) {
// // // //     Node* temp = head;
// // // //     while (temp != nullptr) {
// // // //         cout << temp->data << " ";
// // // //         temp = temp->next;
// // // //     }
// // // //     cout << endl;
// // // // }

// // // // Node* deleteLinkedList(Node* head) {
// // // //     Node* temp;
// // // //     while (head != nullptr) {
// // // //         temp = head;
// // // //         head = head->next;
// // // //         delete temp;
// // // //     }
// // // //     return head;
// // // // }

// // // // int main() {
// // // //     Node* head = nullptr;
// // // //     int size;

// // // //     cin >> size;

// // // //     for (int i = 0; i < size; i++) {
// // // //         int value;
// // // //         cin >> value;
// // // //         head = insertNode(head, value);
// // // //     }

// // // //     int start, end;
// // // //     cin >> start;
// // // //     cin >> end;

// // // //     cout << "Linked List before deletion: ";
// // // //     displayLinkedList(head);

// // // //     head = deleteNodesInRange(head, start, end);

// // // //     if (head == nullptr) {
// // // //         cout << "Linked List after deletion: all the elements are deleted" << endl;
// // // //     } else {
// // // //         cout << "Linked List after deletion: ";
// // // //         displayLinkedList(head);
// // // //     }

// // // //     head = deleteLinkedList(head);

// // // //     return 0;
// // // // }

// // // #include <iostream>
// // // #include <string>
// // // using namespace std;
// // // struct Message {
// // //     string content;
// // //     Message* next;
// // // };

// // // Message* createMessageNode(const string& content) {
// // //     Message* newMessage = new Message();
// // //     newMessage->content = content;
// // //     newMessage->next = nullptr;
// // //     return newMessage;
// // // }

// // // Message* insertMessage(Message* head, string content) {
// // //     Message* newMessage = createMessageNode(content);

// // //     if (head -> next == nullptr) {
// // //         // newMessage -> next = head;
// // //         head->next = newMessage;
// // //         newMessage->next = head;
// // //     } else {
// // //         Message* current = new Message();
// // //         current = head -> next;
// // //         while(current -> next != head ){
// // //             current = current -> next;
// // //         }
// // //         current -> next = newMessage;
// // //         // newMessage->next = head->next;
// // //         // head->next = newMessage;
// // //         newMessage -> next = head ;
// // //     }

// // //     return head;
// // // }

// // // // Message* insertMessage(Message* head, string content) {
// // // //     Message* newMessage = createMessageNode(content);

// // // //     // if (head == nullptr) {
// // // //     if (head == nullptr) {
// // // //         // newMessage -> next = head;
// // // //         // newMessage->next = newMessage;
// // // //         head = newMessage;
// // // //         // head -> next = newMessage;
// // // //         newMessage->next = head;
// // // //     } else {
// // // //         newMessage->next = head->next;
// // // //         head->next = newMessage;
// // // //     }

// // // //     return head;
// // // // }

// // // Message* reverseInsertedMessages(Message* head) {
// // //     if(head == nullptr){
// // //         return head;
// // //     }else{
// // //         Message* prev = head;
// // //         Message* temp = head;
// // //         Message* current = head -> next;
        
// // //         prev -> next = prev;
// // //         while(current != head){
// // //             temp = current -> next;
// // //             current -> next = prev;
// // //             head -> next = current;
// // //             prev = current;
// // //             current = temp;
// // //         }
// // //         head = prev;
// // //     }
// // // }

// // // void displayMessages(Message* head) {
// // //     if (head == nullptr) {
// // //         cout << "Message queue is empty!" << endl;
// // //         return;
// // //     }

// // //     // Message* temp = head -> next;
// // //     Message* temp = head;
// // //     cout << "Message Queue: " << endl;
// // //     do {
// // //         cout << "- " << temp->content << endl;
// // //         temp = temp->next;
// // //     } while (temp  != head );
// // //     // } while (temp -> next != head -> next);
// // //     cout << endl;
// // // }

// // // int main() {
// // //     Message* head = new Message();
// // //     // head -> content = nullptr;
// // //     // head -> next = nullptr;
// // //     // head -> content = NULL;
// // //     head -> next = nullptr;
// // //     // int numMessages;

// // //     // cin >> numMessages;

// // //     // cin.ignore();

// // //     // for (int i = 0; i < numMessages; i++) {
// // //     //     string content;
// // //     //     getline(cin, content);
// // //         head = insertMessage(head, "content0");
// // //         head = insertMessage(head, "content1");
// // //         head = insertMessage(head, "content2");
// // //         head = insertMessage(head, "content3");
// // //         head = insertMessage(head, "content4");
// // //     // }


// // //     head = reverseInsertedMessages(head);
// // //     displayMessages(head);

// // //     return 0;
// // // }

// // #include<iostream>
// // using namespace std;

// // struct Node
// // {
// // 	char data;
// // 	Node* next;
// // 	Node* pre;
// // };

// // Node* insertAtTail(Node* head, char data)
// // {
// //     Node* newNode = new Node();
// //     newNode -> data = data;
// //     newNode -> next = nullptr;
    
// //     if(head -> next == nullptr){
// //         head -> next = newNode;
// //         newNode -> pre = head;
// //         head = newNode;
// //     }else{
// //         Node* current = head;
// //         while(current -> next != nullptr){
// //             current = current -> next;
// //         }
// //         current -> next = newNode;
// //         newNode -> pre = current;
// //     }
// //     return head;
// // }

// // void display(Node* head)
// // {
// //     Node* current = head;
// //     while(current -> next != nullptr){
// //         cout<<current->data<<" ";
// //     }cout<<endl;
// // }

// // void rotateByN(Node* &head, int pos)
// // {
// //     Node* temp = head;
// //     while(pos > 2){
// //         temp = temp -> next;
// //     }
// //     Node* lastTemp = temp -> next;
// //     while(lastTemp -> next != nullptr){
// //         lastTemp = lastTemp -> next;
// //     }
// //     lastTemp -> next = head;
// //     head -> pre = lastTemp;
// //     temp -> next -> pre = nullptr;
// //     temp -> next = nullptr;
// //     head = temp -> next;
// // }

// // int main()
// // {
// //     Node* head = nullptr;
// // 	// Node* head = new Node();
// //     // head -> next = nullptr;
// // 	int n;
// // 	char data;
// // 	cin>>n;
// //     cin.ignore(); // Ignore the newline character

// //     for (int i = 0; i < n; i++) {
// //         cin>>data;
// //         head = insertAtTail(head, data);
// //     }
// // 	int k;
// // 	cin>>k;
// // // 	rotateByN(head, k);
// // 	display(head);
// // 	return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // #define MAX 10
// // struct Stack{
// //     int top;
// //     int arr[MAX];
// // };

// // void initStack(Stack* &s){
// //     s -> top = -1;
// // }
// // // Stack* createStack(int value){
// // //     Stack* s = new Stack();
// // //     s -> data = value;
// // //     top++;
// // // }

// // void push(Stack* &s, int value){
// //     int index = s -> top++;
// //     s -> arr[index] = value;
// // }

// // void pop(Stack* &s){
// //     s -> top--;
// //     // s -> arr[s -> top--];
// // }
// // int main(){
// //     int num;
// //     Stack* s = new Stack();
// //     initStack(s);
// //     cin>>num;
// //     switch(num){
// //         case 1:
// //             int val;
// //             cin>>val;
// //             push(s,val);
// //             cin>>num;
// //             break;
// //         case 2:
// //             pop(s);
// //             cin>>num;
// //             break;
// //         case 5:
// //             break;
// //     }
// // }

// #include<iostream>
// using namespace std;
// #define MAX 10
// struct Stack{
//     int top;
//     int arr[MAX];
// };

// void initStack(Stack* s){
//     s -> top = -1;
// }


// void isFull(Stack* s){
//     if(s -> top == MAX -1){
//         cout<<"Stack is full!"<<endl;
//         // return true;
//     }else{
//         cout<<"Stack is not full"<<endl;
//         // return false;
//     }
// }

// void isEmpty(Stack* s){
//     if(s -> top == -1){
//         cout<<"Stack is empty!"<<endl;
//         // return true;
//     }else{
//         cout<<"Stack is not empty"<<endl;
//         // return false;
//     }
//         // return true;
//         // return false;
// }

// void push(Stack* s, int value){
//     // if(isFull(s)){
//     if(s -> top == MAX -1){
//         cout<<"Stack is full!"<<endl;
//         return;
//     }else{
//         int index = ++(s -> top);
//         s -> arr[index] = value;
//     }
//     }

// void pop(Stack* s){
//     // if(isEmpty(s)){
//     if(s -> top == -1){
//         cout<<"Stack is empty!"<<endl;
//         return;
//     }else{
//         (s -> top)--;
//     }
// }

// int main(){
//     int num;
//     Stack* s = new Stack();
//     initStack(s);
//     while(true){
//         cin>>num;
        
//     switch(num){
//         case 1:
//             int val;
//             cin>>val;
//             push(s,val);
//             break;
//         case 2:
//             pop(s);
//             // cin>>num;
//             break;
//         case 3:
//             isFull(s);
//             // cin>>num;
//             break;
//         case 4:
//             isEmpty(s);
//             // cin>>num;
//             break;
//         case 5:
//             delete s;
//             return 0;
//             break;
//         default:
//             cout<<"Invalid choice"<<endl;
//             return 0;
//             break;
//     }
//     }
// }



#include<iostream>
using namespace std;
#define MAX 10
struct Stack{
    int top;
    int arr[MAX];
};

Stack* initStack(Stack* s){
    s -> top = -1;
}

void push(Stack* s, int value){
    if(s -> top == MAX -1){
        return;
    }else{
        int index = ++s -> top;
        s -> arr[index] = value;
    }
}

void pop(Stack* s){
    if(s -> top == -1){
        return;
    }else{
        --s -> top;
    }
}

float average(Stack* s){
    Stack* temp = s;
    int index = s -> top;
    int count = index + 1;
    int sum=0;
    while(index != -1){
        sum += temp -> arr[index];
        index--;
    }
    // return (((float)sum)/count);
    // float average =  static_cast<float>(sum) / static_cast<float>(count);
    // float average =  sum / (float) count;
    return sum / (float) count;
    // return average;
}

void display(Stack* s){
    Stack* temp = s;
    int index = s -> top ;
    cout<<"Initial Stack: ";
    while(index != -1){
        cout<<temp -> arr[index]<<" ";
        index--;
    }cout<<endl;
    
}
int main(){
    Stack* s = new Stack();
    initStack(s);
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int data;
        cin>>data;
        push(s,data);
    }
    
    display(s);
    float avg = average(s);
    cout<<"Average: "<<avg<<endl;
    pop(s);
    display(s);
    float avg2 = average(s);
    cout<<"Average: "<<avg2<<endl;
    
}