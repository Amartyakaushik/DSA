// //-------lecture 6---
// /* Question 1
// Input format :
// The first line of input is an integer n, representing the number of contacts.

// The second line of input consists of n space-separated strings representing the names.

// Output format :
// The first line of output prints "Initial order: " followed by the names in the given order, separated by space.

// The following n-1 lines print "After Iteration X: Y" where X is the iteration number and Y is the result after each iteration separated by space.

// The last line of output prints "Sorted order: " representing the names in sorted order, separated by space.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The strings contain both uppercase and lowercase letters, with 50 characters at most.

// Sample test cases :
// Input 1 :
// 3
// Lucifer Ellen Annabell
// Output 1 :
// Initial order: Lucifer Ellen Annabell 
// After Iteration 1: Ellen Lucifer Annabell 
// After Iteration 2: Annabell Ellen Lucifer 
// Sorted order: Annabell Ellen Lucifer 
// Input 2 :
// 6
// Zayn Liam Niall Harry Louis Larry
// Output 2 :
// Initial order: Zayn Liam Niall Harry Louis Larry 
// After Iteration 1: Liam Zayn Niall Harry Louis Larry 
// After Iteration 2: Liam Niall Zayn Harry Louis Larry 
// After Iteration 3: Harry Liam Niall Zayn Louis Larry 
// After Iteration 4: Harry Liam Louis Niall Zayn Larry 
// After Iteration 5: Harry Larry Liam Louis Niall Zayn 
// Sorted order: Harry Larry Liam Louis Niall Zayn 
// */

// #include<iostream>
// #include<iomanip>
// using namespace std;

// void bubbleSort(float arr[], int n){
//         bool yes = false;
//     for(int i = 0; i < n-1 ; i++){
//         for(int j = 0; j<n-i-1; j++){
//             if(arr[j] > arr[j+1] ){
//                 float temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 yes = true;
//             }
//         }
        
//         if(yes){
            
//         cout<<"After iteration "<<i + 1<<": ";
//         for(int k = 0; k<n; k++){
//             cout<<fixed<<setprecision(2)<<arr[k]<<" ";
//         }
//         cout<<endl;
//         yes = false;
//         }
//     }
//     cout<<"Sorted array: ";
//         for(int k = 0; k<n; k++){
//             cout<<fixed<<setprecision(2)<<arr[k]<<" ";
//         }
//         cout<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     float arr[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     bubbleSort(arr, n);
// }

// /*Q2
// On the first day of school, students randomly seat themselves. Shorter students at the back can't see the board because they're behind taller students. To fix this, the teacher decides to arrange the students in height order.



// The teacher asks the students to stand in a line. She repeatedly compares the height of the first student with each of the others. If the first student is taller, they swap places. This process continues for all students, sorting them by height.



// Write a program to perform this selection sort on N students.

// Input format :
// The first line of input consists of an integer N, representing the number of students.

// The second line consists of N space-separated integers representing the height of N students.

// Output format :
// The output displays the height order of students before sorting and after sorting. Also, print after each iteration.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 2 ≤ N ≤ 50

// 100 ≤ height of the students ≤ 200

// Sample test cases :
// Input 1 :
// 6
// 130 123 134 145 132 111
// Output 1 :
// Student's height order before sorting: 130 123 134 145 132 111 
// Height order of students after iteration 1: 111 123 134 145 132 130 
// Height order of students after iteration 2: 111 123 134 145 132 130 
// Height order of students after iteration 3: 111 123 130 145 132 134 
// Height order of students after iteration 4: 111 123 130 132 145 134 
// Height order of students after iteration 5: 111 123 130 132 134 145 
// After final comparison of all students, the height order becomes: 111 123 130 132 134 145 
// Input 2 :
// 5
// 106 205 101 102 104
// Output 2 :
// Student's height order before sorting: 106 205 101 102 104 
// Height order of students after iteration 1: 101 205 106 102 104 
// Height order of students after iteration 2: 101 102 106 205 104 
// Height order of students after iteration 3: 101 102 104 205 106 
// Height order of students after iteration 4: 101 102 104 106 205 
// After final comparison of all students, the height order becomes: 101 102 104 106 205 

// */

// #include<iostream>
// using namespace std;

// void selectionSort(int arr[], int size){
//             cout<<"Student's height order before sorting: ";
//             for(int k =0; k<size; k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
            
//             for(int i = 0; i<size -1; i++){
//             int minIndex = i;
//                 for(int j = i +1; j<size; j++){
                    
//                 if(arr[minIndex] > arr[j]){
//                     minIndex = j;
//                 }
//                 }
//                 if(minIndex != i){
//                     int temp = arr[i];
//                     arr[i] = arr[minIndex];
//                     arr[minIndex] = temp;
//                 }
//             cout<<"Height order of students after iteration "<<i+1<<": ";
//             for(int k =0; k<size; k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//     }
//             cout<<"After final comparison of all students, the height order becomes: ";
//             for(int k =0; k<size; k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
    
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
//     selectionSort(arr,n);
// }

// /*  Q3
// You are developing a contact management system for customer relationship management (CRM) software. As part of the system, you need to implement a feature that sorts the contact names in alphabetical order.



// Write a program that prompts the user to enter the number of contacts and their respective names. The program should then use the insertion sort algorithm to sort the contact names in alphabetical order. After sorting, the program should display the contact names, now arranged in alphabetical order, after each iteration.



// Company Tags: CTS

// Input format :
// The first line of input is an integer n, representing the number of contacts.

// The second line of input consists of n space-separated strings representing the names.

// Output format :
// The first line of output prints "Initial order: " followed by the names in the given order, separated by space.

// The following n-1 lines print "After Iteration X: Y" where X is the iteration number and Y is the result after each iteration separated by space.

// The last line of output prints "Sorted order: " representing the names in sorted order, separated by space.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The strings contain both uppercase and lowercase letters, with 50 characters at most.

// Sample test cases :
// Input 1 :
// 3
// Lucifer Ellen Annabell
// Output 1 :
// Initial order: Lucifer Ellen Annabell 
// After Iteration 1: Ellen Lucifer Annabell 
// After Iteration 2: Annabell Ellen Lucifer 
// Sorted order: Annabell Ellen Lucifer 
// Input 2 :
// 6
// Zayn Liam Niall Harry Louis Larry
// Output 2 :
// Initial order: Zayn Liam Niall Harry Louis Larry 
// After Iteration 1: Liam Zayn Niall Harry Louis Larry 
// After Iteration 2: Liam Niall Zayn Harry Louis Larry 
// After Iteration 3: Harry Liam Niall Zayn Louis Larry 
// After Iteration 4: Harry Liam Louis Niall Zayn Larry 
// After Iteration 5: Harry Larry Liam Louis Niall Zayn 
// Sorted order: Harry Larry Liam Louis Niall Zayn 
// */

// #include<iostream>
// using namespace std;
// void insertionSort(string arr[], int size){
//     cout<<"Initial order: ";
//     for(int in = 0; in < size; in++){
//         cout<<arr[in]<<" ";
//     }
//     cout<<endl;
//     for(int i =1; i<size; i++){
//         string key = arr[i];
//         int j = i -1;
//         while(arr[j] > key && j >= 0){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
        
//         cout<<"After Iteration "<<i<<": ";
//         for(int k = 0; k<size; k++){
//             cout<<arr[k]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Sorted order: ";
//     for(int in = 0; in < size; in++){
//         cout<<arr[in]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     string arr[n];
//     for(int i =0; i<n; i++){
//         cin>>arr[i];
//     }
    
//     insertionSort(arr,n);
// }

// /*   Q4
// You are working on a ticketing system for a popular event. As part of the system, you need to implement a feature that finds the kth smallest ticket price among all the available tickets.



// Write a program that takes user input for the number of tickets and their respective prices. The program should use the selection sort algorithm to sort the ticket prices in non-decreasing order. After sorting, it should display the sorted order of the ticket prices and display the kth smallest ticket price from the sorted list.



// Company Tags: Capgemini 

// Input format :
// The first line of input consists of an integer n, representing the number of tickets.

// The second line of input consists of n space-separated integers, representing the prices of the tickets.

// The third line of input consists of an integer k, representing the position of the ticket price to find (1-indexed).

// Output format :
// The first line of output displays "Sorted order: " followed by n space-separated integers, representing the sorted array of ticket prices.

// The second line of output displays "The kth smallest element is: " followed by an integer, representing the kth smallest ticket price.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 15

// 1 ≤ k < n

// 1 ≤ ticket price ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 1 4 7 8 5
// 3
// Output 1 :
// Sorted order: 1 4 5 7 8 
// The kth smallest element is: 5
// Input 2 :
// 9
// 7 9 6 8 4 5 3 2 1
// 6
// Output 2 :
// Sorted order: 1 2 3 4 5 6 7 8 9 
// The kth smallest element is: 6
// */

// #include<iostream>
// using namespace std;
// void selectionSort(int arr[], int size, int key){
//     for(int i = 0; i<size; i++){
//         int minIndex = i;
//         for(int j = i +1; j<size; j++){
//             if(arr[minIndex] > arr[j]){
//                 minIndex = j;
//             }
//         }
//         int temp = arr[minIndex];
//         arr[minIndex] = arr[i];
//         arr[i] = temp;
//     }
    
//     cout<<"Sorted order: ";
//     int index = 0;
//     for(int k = 0; k<size; k++){
//         cout<<arr[k]<<" ";
//     }
//     cout<<endl;
    
//     cout<<"The kth smallest element is: "<<arr[key-1];
// }

// int main(){
//     int n,key;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     cin>>key;
//     selectionSort(arr,n,key);
// }

// // /* Q5
// // Given an array of integers, implement the insertion sort algorithm that sorts elements at odd positions in descending order and elements at even positions in ascending order. Input consists of an integer n followed by n integers. Output the sorted array. Here, the position starts from 1.



// // Example



// // Input:

// // array[] = {7, 10, 11, 3, 6, 9, 2, 13, 0}



// // Output:      

// // 11 3 7 9 6 10 2 13 0 



// // Explanation:

// // Even-positioned elements are 10 3 9 13. After sorting in ascending order: 3 9 10 13

// // Odd-positioned elements are 7 11 6 2 0. After sorting in descending order: 11 7 6 2 0

// // Final combined array: 11 3 7 9 6 10 2 13 0 

// // Input format :
// // The first line of input consists of an integer N, representing the number of elements.

// // The second line consists of N space-separated integers representing the elements.

// // Output format :
// // The output displays the sorted array as described in the problem statement, separated by a space.



// // ﻿Refer to the sample output for formatting specifications.

// // Code constraints :
// // In this scenario, the test cases fall under the following constraints:

// // 1 ≤ N ≤ 30

// // 0 ≤ elements ≤ 105

// // Sample test cases :
// // Input 1 :
// // 5
// // 1 2 3 4 5
// // Output 1 :
// // 5 2 3 4 1 
// // Input 2 :
// // 9
// // 7 10 11 3 6 9 2 13 0
// // Output 2 :
// // 11 3 7 9 6 10 2 13 0 
// // */

// #include<iostream>
// using namespace std;
// void insertionSort(int arr[], int size){
//     for(int i = 2; i < size; i++){
//         if(i % 2 == 0){
//             int j = i -2;
//             int key = arr[i];
//             while(arr[j] < key && j >= 0){
//                 arr[j+2] = arr[j];
//                 j -= 2;
//             }
//             arr[j+2] = key;
//         }else{
//             int j = i -2;
//             int key = arr[i];
//             while(arr[j] > key && j >= 0){
//                 arr[j+2] = arr[j];
//                 j -= 2;
//             }
//             arr[j+2] = key;
            
//         }
//     }
    
//     for(int k = 0; k< size; k++){
//         cout<<arr[k]<<" ";
//     }
// }

// int main(){
//     int n; 
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
    
//     insertionSort(arr,n);
// }

// // #include<iostream>
// // using namespace std;

// // void mergeSort(int arr1[], int size1, int arr2[], int size2){
// // 	    int mergedSize = size1 + size2;

// //     int mergedArray[mergedSize];
// //     int i=0, j=0, k=0;
// //     while(i<size1 && j<size2){
// //         if(arr1[i] <= arr2[j]){
// //             mergedArray[k++] = arr1[i++];
// //         }else{
// //             mergedArray[k++] = arr2[j++];
// //         }
// //     }
    
// //     while(i<size1){
// //         mergedArray[k++] = arr1[i++];
// //     }
    
// //     while(j<size2){
// //         mergedArray[k++] = arr2[j++];
// //     }
    
// //     for(int i = 0; i<mergedSize; i++){
// //         cout<<mergedArray[i]<<" ";
// //     }
// // }

// // int main(){
// //     int n,m;
// //     cin>>n;
// //     int arr1[n];
// //     for(int i = 0; i<n; i++){
// //         cin>>arr1[i];
// //     }
    
// //     cin>>m;
// //     int arr2[m];
// //     for(int i = 0; i<m; i++){
// //         cin>>arr2[i];
// //     }
    
// //     mergeSort(arr1, n, arr2, m);
// // }

// // //-----------------------Unit 01 --------static Model question-----------
// /*
// Problem Statement
// 1


// You're managing the inventory levels of different items in a warehouse. The inventory levels are stored in an array of integers, where each integer represents the quantity of a specific item. 



// You will perform the following operations:

// 1.	Traversal: Go through the list of inventory quantities to verify the stock levels.

// 2.	Insertion: Add a new item to the inventory, updating the quantity.

// 3.	Deletion: Remove an item from the inventory when it is out of stock.

// Input format :
// The first line of input contains an integer x, representing the number of items in the inventory.

// The second line contains x space-separated integers, each representing the quantity of an item in the inventory.

// The third line contains an integer n, representing the number of items to be newly added.

// The fourth line contains n space-separated integers, each representing the quantity of a new item to be added to the inventory.

// The fifth line contains an integer m, representing the number of items to be removed.

// The sixth line contains m space-separated integers, each representing the quantity of an item to be removed from the inventory.

// Output format :
// The first line of output prints "Inventory List: " followed by the quantities of the items in the inventory, separated by spaces.

// After each insertion:

// Print "Inserting Item: " followed by the quantity of the new item being added.
// Print "Inventory List: " followed by the updated inventory quantities, separated by spaces.
// After each deletion:

// Print "Removing Item: " followed by the quantity of the item being removed.
// Print "Inventory List: " followed by the updated inventory quantities, separated by spaces.


// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ x ≤ 10

// 1 ≤ n, m ≤ 5

// Sample test cases :
// Input 1 :
// 3
// 50 120 30
// 2
// 75 200
// 2
// 120 50
// Output 1 :
// Inventory List: 50 120 30 
// Inserting Item: 75
// Inventory List: 50 120 30 75 
// Inserting Item: 200
// Inventory List: 50 120 30 75 200 
// Removing Item: 120
// Inventory List: 50 30 75 200 
// Removing Item: 50
// Inventory List: 30 75 200 
// Input 2 :
// 4
// 12 78 35 69
// 1
// 42
// 3
// 42 35 69
// Output 2 :
// Inventory List: 12 78 35 69 
// Inserting Item: 42
// Inventory List: 12 78 35 69 42 
// Removing Item: 42
// Inventory List: 12 78 35 69 
// Removing Item: 35
// Inventory List: 12 78 69 
// Removing Item: 69
// Inventory List: 12 78 
// */

// #include <iostream>
// using namespace std;

// #define MAX_SIZE 100

// void traverseInventory(int inventory[], int size) {
//     cout<<"Inventory List: ";
//     for(int i = 0; i<size; i++){
//         cout<<inventory[i]<<" ";
//     }
//     cout<<endl;
// }

// void insertItem(int inventory[], int &size, int item) {
//     cout<<"Inserting Item: "<<item<<endl;
//     inventory[size] = item;
//     size++;
//     cout<<"Inventory List: ";
//     for(int i = 0; i<size; i++){
//         cout<<inventory[i]<<" ";
//     }
//     cout<<endl;
// }

// void removeItem(int inventory[], int &size, int item) {
//     cout<<"Removing Item: "<<item<<endl;
//     int pos;
//     for(int i =0; i<size; i++){
//         if(inventory[i] == item){
//             pos = i;
//         }
//     }
    
//     for(int i = pos; i<size; i++){
//         inventory[i] = inventory[i+1];
//     }
//     size--;
//     cout<<"Inventory List: ";
//     for(int i = 0; i<size; i++){
//         cout<<inventory[i]<<" ";
//     }
//     cout<<endl;
//     //Type your code here
    
// }

// int main() {
//     int inventory[MAX_SIZE];
//     int size, n, m;
//     int newItems[MAX_SIZE];
//     int deleteItems[MAX_SIZE];

//     cin >> size;

//     for (int i = 0; i < size; i++) {
//         cin >> inventory[i];
//     }

//     traverseInventory(inventory, size);

//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> newItems[i];
//     }
//     for (int i = 0; i < n; i++) {
//         insertItem(inventory, size, newItems[i]);
//     }

//     cin >> m;
//     for (int i = 0; i < m; i++) {
//         cin >> deleteItems[i];
//     }
//     for (int i = 0; i < m; i++) {
//         removeItem(inventory, size, deleteItems[i]);
//     }

//     return 0;
// }

// /*
// Problem Statement 2



// You're managing a list of product IDs on an e-commerce platform. Each product ID is an integer representing a unique product. You need to search for specific products in the list using two different search methods: linear search and binary search.



// Linear Search: This method is used when the list of product IDs is unsorted. You'll traverse the entire list to find the desired product ID.
// Binary Search: This method is used when the list of product IDs is sorted in ascending order. You'll repeatedly divide the list in half to locate the desired product ID.
// Input format :
// The first line of input contains an integer n, representing the number of products in the list.

// The second line contains n space-separated integers, each representing a unique product ID.

// The third line contains an integer key, representing the product ID to search for in the list.

// Output format :
// The first line of output prints which search method is used, either "Using Binary Search" or "Using Linear Search", depending on whether the list is sorted.

// The second line prints one of the following:

// If the product ID is found, print "[key] found at index [index]". The index value starts from 0.
// If the product ID is not found, print "[key] not found in the list".


// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 15

// 100 ≤ product ID, key ≤ 999

// Sample test cases :
// Input 1 :
// 5
// 101 405 303 604 505
// 303
// Output 1 :
// Using Linear Search
// 303 found at index 2
// Input 2 :
// 5
// 101 405 303 604 505
// 308
// Output 2 :
// Using Linear Search
// 308 not found in the list
// Input 3 :
// 5
// 101 205 303 404 505
// 404
// Output 3 :
// Using Binary Search
// 404 found at index 3
// Input 4 :
// 5
// 101 205 303 404 505
// 409
// Output 4 :
// Using Binary Search
// 409 not found in the list

// */

// // You are using GCC
// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int n, int key) {
//     for(int i = 0; i<n; i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }
//     return -1;
    
// }

// int binarySearch(int arr[], int n, int key) {
//         int beg = 0;
//         int end = n - 1;
//         while(beg <= end){
//             int mid = beg + (end - beg) / 2;
//             if(arr[mid] == key){
//                 return mid;
//             }else if(arr[mid] < key){
//                 beg = mid + 1;
//             }else if(arr[mid] > key){
//                 end = mid - 1;
//             }
//         }
//     return -1;
    
// }

// bool isSorted(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int searchArray(int arr[], int n, int key) {
//     if (isSorted(arr, n)) {
//         cout << "Using Binary Search" << endl;
//         return binarySearch(arr, n, key);
//     } else {
//         cout << "Using Linear Search" << endl;
//         return linearSearch(arr, n, key);
//     }
// }

// int main() {
//     int n, key;
//     cin >> n;
    
//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
    
//     cin >> key;

//     int result = searchArray(arr, n, key);

//     if (result != -1) {
//         cout << key << " found at index " << result;
//     } else {
//         cout << key << " not found in the list";
//     }

//     return 0;
// }

// /*
// Problem Statement 3



// ﻿You're managing employee records for a company. The employee IDs from two different departments are stored in two separate arrays, both sorted in ascending order. Your task is to merge these two sorted arrays into a single sorted array, ensuring that the order is maintained.

// Input format :
// The first line of input contains an integer n, representing the number of employees in the first department.

// The second line contains n space-separated integers, each representing a sorted employee ID from the first department.

// The third line contains an integer m, representing the number of employees in the second department.

// The fourth line contains m space-separated integers, each representing a sorted employee ID from the second department.

// Output format :
// The output prints the merged sorted employee IDs from both departments.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 0 ≤ n, m ≤ 10

// 101 ≤ employee ID ≤ 990

// Sample test cases :
// Input 1 :
// 4
// 101 203 305 407
// 4
// 102 204 306 408
// Output 1 :
// 101 102 203 204 305 306 407 408 
// Input 2 :
// 4
// 101 203 305 407
// 4
// 203 305 508 609
// Output 2 :
// 101 203 203 305 305 407 508 609 
// Input 3 :
// 3
// 102 204 306
// 0
// Output 3 :
// 102 204 306 
// Input 4 :
// 2
// 101 202
// 4
// 150 250 350 450
// Output 4 :
// 101 150 202 250 350 450 
// */

// #include<iostream>
// using namespace std;

// void mergeSort(int arr1[], int size1, int arr2[], int size2){
//     int mergedSize = size1 + size2;
//     int mergedArray[mergedSize];
//     int i=0, j=0, k=0;
//     while(i<size1 && j<size2){
//         if(arr1[i] <= arr2[j]){
//             mergedArray[k++] = arr1[i++];
//         }else{
//             mergedArray[k++] = arr2[j++];
//         }
//     }
    
//     while(i<size1){
//         mergedArray[k++] = arr1[i++];
//     }
    
//     while(j<size2){
//         mergedArray[k++] = arr2[j++];
//     }
    
//     for(int i = 0; i<mergedSize; i++){
//         cout<<mergedArray[i]<<" ";
//     }
// }

// int main(){
//     int n,m;
//     cin>>n;
//     int arr1[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr1[i];
//     }
    
//     cin>>m;
//     int arr2[m];
//     for(int i = 0; i<m; i++){
//         cin>>arr2[i];
//     }
    
//     mergeSort(arr1, n, arr2, m);
// }

// /*  4   Problem Statement



// You're an instructor managing a list of exam scores for a group of students. The scores are stored in an array, and you need to sort this array in ascending order so that you can easily identify the highest and lowest scores. You'll use two different sorting algorithms: bubble sort and selection sort.



// Bubble sort is selected if the array is nearly sorted. An array is considered nearly sorted if at most one pair of elements is out of order. The selection sort is chosen if the array is not nearly sorted.

// Input format :
// The first line of input contains an integer n, representing the number of students.

// The second line contains n space-separated integers, representing the exam scores of students.

// Output format :
// The first line of output prints which sort algorithm is used, either "Using Bubble Sort" or "Using Selection Sort".

// The second line prints the sorted exam scores in ascending order.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 20

// 1 ≤ exam score ≤ 100

// Sample test cases :
// Input 1 :
// 6
// 64 78 85 92 99 73
// Output 1 :
// Using Bubble Sort
// Sorted Exam Scores: 64 73 78 85 92 99 
// Input 2 :
// 5
// 32 91 53 76 28
// Output 2 :
// Using Selection Sort
// Sorted Exam Scores: 28 32 53 76 91 
// */

// // You are using GCC
// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n) {
//     for(int i = 0; i < n - 1; i++){
//         for(int j = 0; j < n - i -1; j++){
//             if(arr[j +1] < arr[j]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// void selectionSort(int scores[], int n) {
//     for(int i = 0; i<n-1; i++){
//         int minIndex = i;
//         for(int j = i+1; j<n; j++){
//             if(scores[j] < scores[minIndex]){
//                 minIndex = j;
//             }
//         }
//         if(minIndex != i){
//             int temp = scores[i];
//             scores[i] = scores[minIndex];
//             scores[minIndex] = temp;
//         }
//     }
// }

// bool isNearlySorted(int scores[], int n) {
//     int count = 0;
//     for (int i = 0; i < n - 1; i++) {
//         if (scores[i] > scores[i + 1]) {
//             count++;
//             if (count > 1) { 
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// void sortArray(int scores[], int n) {
//     if (isNearlySorted(scores, n)) {
//         cout << "Using Bubble Sort" << endl;
//         bubbleSort(scores, n);
//     } else {
//         cout << "Using Selection Sort" << endl;
//         selectionSort(scores, n);
//     }
// }

// void printArray(int scores[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << scores[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     int examScores[n];
//     for (int i = 0; i < n; i++) {
//         cin >> examScores[i];
//     }

//     sortArray(examScores, n);

//     cout << "Sorted Exam Scores: ";
//     printArray(examScores, n);

//     return 0;
// }

// /*  5    Problem Statement



// You're a coach managing a list of finishing times for athletes in a race. The times are stored in an array, and you need to sort this array in ascending order to determine the rankings.



// You'll use the insertion sort algorithm to accomplish this.

// Input format :
// The first line of input contains an integer n, representing the number of athletes.

// The second line contains n space-separated integers, each representing the finishing time of an athlete in seconds.

// Output format :
// The output prints the sorted finishing times of the athletes in ascending order.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 20

// 10 ≤ finishing time ≤ 120

// Sample test cases :
// Input 1 :
// 5
// 75 89 65 90 70
// Output 1 :
// 65 70 75 89 90 
// Input 2 :
// 5
// 60 65 70 75 80
// Output 2 :
// 60 65 70 75 80 
// Input 3 :
// 5
// 90 85 80 75 70
// Output 3 :
// 70 75 80 85 90 
// Input 4 :
// 5
// 80 85 80 70 85
// Output 4 :
// 70 80 80 85 85 
// */

// #include<iostream>
// using namespace std;
// void insertionSort(int arr[], int size){
//     for(int i = 1; i< size ; i++){
//         int j = i -1;
//         int key = arr[i];
//         while(j >= 0 && arr[j] > key ){
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
//     insertionSort(arr,n);
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
    
// }

// //-----------------------Unit--02-----------------
// //-----------Lecture ---   07---------------
// /*
// Problem Statement



// Imagine you are developing a contact management application where users can maintain a singly linked list of names. 



// Initially, users can enter a sequence of names to form a list of contacts. Later, they can insert a new name at a specific position within the list to rearrange their contacts, ensuring the list is updated and displayed correctly.

// Input format :
// The first line of input consists of an integer n, representing the number of initial names.

// The next n lines each contain a single name, representing the initial list of contacts.

// The last line consists of a name and an integer pos, representing the new contact to be added and its position in the list.

// Output format :
// The output prints the updated list of contacts after inserting the new contact at the specified position.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// 1 ≤ length of each name ≤ 100

// Sample test cases :
// Input 1 :
// 4
// John
// Alice
// Bob
// Emma
// Michael 3
// Output 1 :
// John Alice Michael Bob Emma 
// Input 2 :
// 3
// Emma
// Daniel
// Sophia
// Charlotte 1
// Output 2 :
// Charlotte Emma Daniel Sophia 

// */

// #include<iostream>
// #include<string>
// using namespace std;
// struct node{
//     string data;
//     struct node* next;
// };

// struct node* createNode(string value){
//     struct node* newNode = new node;
//     newNode -> data = value;
//     newNode -> next = nullptr;
//     return newNode;
// }

// struct node* insertAtBeg(struct node* head, string value){
//     struct node* newNode = createNode(value);

//     newNode -> next = head;
//     head = newNode;
//     return head;
// }

// struct node* insertAtEnd(struct node* head, string value){
//     struct node* newNode = createNode(value);
//     if(head == nullptr){
//         return newNode;
//     }
//     struct node* current = head;
//     while(current -> next != nullptr){
//         current = current -> next;
//     }
    
//     current -> next = newNode;
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
//     while(current  != nullptr){
//         cout<<current -> data << " ";
//         current = current -> next;
//     }cout<<endl;
// }

// int main(){
//     struct node* head = nullptr;
//     int n;
//     string s;
//     cin>>n;
//     cin.ignore();
//     for(int i = 0; i<n; i++){
//         // cin>>s;
//         getline(cin,s);
//         head = insertAtEnd(head,s);
//     }
//     // printList(head);
    
//     int pos;
//     string key;
//     // cin.ignore();
//     // getline(cin, key);
//     cin>>key>>pos;
//     // cin>>pos;
//     head = insertAtPosition(head, key, pos);
//     printList(head);
//     return 0;
// }

// /*
// Kathir is a software engineer working on a project that involves managing a linked list of integers. His task is to develop a program that allows the user to insert integers at the beginning of the list and then display the entire list. The program should continue inserting elements until the user decides to stop(1).



// Company tags: Wipro

// Input format :
// The first line of input consists of an integer n, representing the item to be inserted at the beginning of the linked list.

// The second line of input consists of an integer (0 or 1), representing the choice to continue or stop the insertion process.

// Input 0 to continue inserting more integers.
// Input 1 to stop inserting and display the linked list.
// Output format :
// The output displays "Node inserted" each time a new integer is inserted into the linked list in a new line.

// After insertion, the output displays "Linked List: " followed by the integers in the linked list in insertion order.

// The final line of output displays "Node ended" after displaying the linked list.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 3500

// Sample test cases :
// Input 1 :
// 2
// 0
// 4
// 1
// Output 1 :
// Node inserted
// Node inserted
// Linked List: 4 2 
// Node ended
// Input 2 :
// 4
// 1
// Output 2 :
// Node inserted
// Linked List: 4 
// Node ended
// */

// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     struct node* next;
// };

// // node* createNode(int value){
// //     node* newNode = (struct node*)malloc(sizeof(struct node));
// //     newNode -> data = value;
// //     newNode -> next = nullptr;
// //     return newNode;
// // }

// node* insertAtBeg(node* head, int value){
//     // node* newNode = createNode(value);
//     // if(head == nullptr){
//     //     return newNode;
//     // }
//     node* newNode = new node();
//     newNode -> data = value;
//     // newNode -> next = nullptr;
    
//     // node* current = head;
//     newNode -> next = head;
//     head = newNode;
//     return head;
// }

// void printList( node* head){
//     node* current = head;
//     while(current != nullptr){
//         cout<<current -> data <<" ";
//         current = current -> next;
//     }cout<<endl;
// }

// int main(){
//     node* head = nullptr;
//     int decision,num;
    
//     while(true){
//         // if(decision == 0){
//     cin>>num;
//     // if(num > 3500){
//     //     break;
//     // }
//     head = insertAtBeg(head, num);
//         cout<<"Node inserted"<<endl;
    
//     cin>>decision;
//     if(decision >= 1){
//         break;
//     }
//     }
//     cout<<"Linked List: ";
//     printList(head);
//     cout<<"Node ended"<<endl;
   
// }

// /*
// Problem Statement



// Vijay is creating a linked list and wants to perform different operations on it. She can append values either to the left (beginning) or right (end) of the linked list. She also wants to print the linked list at any point in time. 



// He wants to be able to perform the following operations:

// 1: Append Left: Append a node at the beginning(left) of the linked list.

// 2: Append Right: Append a node at the end(right) of the linked list.

// 3: Print: Print the contents of the linked list.

// 4: Exit: Exit the program.



// Company tags: Accenture

// Input format :
// The input consists of multiple lines. Each line starts with an integer choice representing the operation (1 to append left, 2 to append right, 3 to print, and 4 to exit).

// If the choice is 1 or 2, it is followed by an integer n representing the value to be appended to the linked list separated by a space.

// The input continues until the choice is 4.

// Output format :
// When the choice is 3, the output displays "Linked List: " followed by the values in the linked list separated by a space.

// If the choice is invalid the output displays "Invalid choice".



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 100

// Sample test cases :
// Input 1 :
// 1 10
// 2 20
// 3
// 4
// Output 1 :
// Linked List: 10 20
// Input 2 :
// 1 10
// 1 20
// 1 30
// 2 35
// 3 
// 4
// Output 2 :
// Linked List: 30 20 10 35
// Input 3 :
// 5
// 4
// Output 3 :
// Invalid choice
// */

// #include <iostream>
// using namespace std;

// struct Node {
//     int val;
//     Node* next;
// };

// Node* createNode(int val){
//     Node* newNode =  (struct Node*)malloc(sizeof(struct Node));
//     newNode -> val = val;
//     newNode -> next = nullptr;
//     return newNode;
// }
// Node* appendLeft(Node* head, int val) {
    
//     Node* newNode = createNode(val);
//     if(head == nullptr){
//         return newNode;
//     }
//     newNode -> next = head;
//     head = newNode;
//     return head;
// }

// Node* appendRight(Node* head, int val) {
//     Node* newNode = createNode(val);
//     Node* current = head;
//     if(head == nullptr){
//         return newNode;
//     }
//     while(current -> next != nullptr){
//         current = current -> next;
//     }
//     current-> next = newNode;
//     return head;
    
// }

// void print(Node* head) {
//     Node* current = head;
//     while(current != nullptr){
//         cout<<current -> val<<" ";
//         current = current -> next;
//     }
//     cout<<endl;
// }

// int main() {
//     Node* myList = nullptr;
//     int choice;
//     int val;

//     do {
//     cin >> choice;


//     switch (choice) {
//         case 1:
//             cin >> val;
//             myList = appendLeft(myList, val);
//             break;
//         case 2:
//             cin >> val;
//             myList = appendRight(myList, val);
            
//             break;
//         case 3:
//             cout << "Linked List: ";
//             print(myList);
//             break;
//         case 4:
//             break;
//         default:
//             cout << "Invalid choice" ;
//     }

// } while (choice != 4);


//     return 0;
// }


#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
};
void print(Node* head) {
    Node* current = head;
    while(current != nullptr){
        cout<<current -> val<<" ";
        current = current -> next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node();
    head -> val = 5;
    head -> next = new Node();
    head -> next -> val = 10;
    head -> next -> next = NULL ;
    print(head);

}

/*
A company wants to analyze the performance of its sales team by reviewing the sales figures from the most recent months. Each month's sales data is entered into a singly linked list, with each node representing a month's sales. 



Write a program that computes the sum of sales for the last m months from this linked list data.

Input format :
The first line consists of an integer n, representing the number of months' sales data.

The second line consists of n space-separated integers, representing the sales data for each month.

The third line consists of an integer m, representing the number of most recent months to sum up.

Output format :
The output prints the sum of sales for the last m months.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 100

0 ≤ sales data ≤ 100

Sample test cases :
Input 1 :
6
3 1 0 4 30 12
3
Output 1 :
46
Input 2 :
10
7 4 1 2 5 8 0 3 6 9
5
Output 2 :
26
*/

#include<iostream>
using namespace std;

struct Node{
    int value;
    struct Node* next;
};

Node* createNode(int data){
    Node* newNode = new Node();
    newNode -> value = data;
    newNode -> next = nullptr;
    return newNode;
}

Node* insertAtBeg(Node* head, int data){
    Node* newNode = createNode(data);
    // if(head == nullptr){
    //     return newNode;
    // }
    newNode -> next = head ;
    head = newNode;
    return head;
}

void printUpto(Node* head,int position){
    int sum=0;
    Node* current = head;
    while(position != 0){
        sum += current -> value;
        current = current -> next;
        position--;
    }cout<<sum<<endl;
}

int main(){
    int num,data,position;
    cin>>num;
    Node* head = new Node();
    for(int i = 0; i<num; i++){
        cin>>data;
        head = insertAtBeg(head, data);
    }
    cin>>position;
    printUpto(head, position);
    
}

/*
Problem Statement



Aaron is building a text editor feature to check if a user-entered word is a palindrome using a singly linked list. Each character of the word is stored as a node in the linked list. Write a program for him to construct the linked list from user input and determine if the word is a palindrome.



Company Tags: Amazon, Microsoft, Snapdeal

Input format :
The input consists of a series of space-separated characters (alphabets, digits, special symbols). Enter $ to stop.

Output format :
The output prints whether the given characters form a palindrome or not.



Refer to the sample output for the exact text and format.

Code constraints :
The input will be valid ASCII characters.

Sample test cases :
Input 1 :
1 2 3 4 5 4 3 2 1 $
Output 1 :
The linked list is a palindrome
Input 2 :
a b c d e f $
Output 2 :
The linked list is not a palindrome
Input 3 :
! @ # % ^ % # @ ! $
Output 3 :
The linked list is a palindrome
*/

#include <iostream>
using namespace std;

struct Node {
    char data;
    struct Node* next;
};

Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    
    while(current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

bool isPalindrome(Node* head) {
    if(head == nullptr || head -> next == nullptr){
        return true;
    }
    
    Node* original = head;
    Node* copyHead = nullptr;
    Node* copyTail = nullptr;
                 
    while (original != nullptr) {
    Node* newNode = new Node();
    newNode->data = original->data;
    newNode->next = nullptr;
                                                         
     if (copyHead == nullptr) {
    copyHead = newNode;
    copyTail = newNode;
    } else {
    copyTail->next = newNode;
    copyTail = newNode;
    }
    original = original->next;
        
    }
    
    Node* reversed = reverseLinkedList(copyHead);
    original = head;
    
    while(original != nullptr && reversed != nullptr){
        if(original -> data != reversed -> data){
            return false;
        }
        
        original = original-> next;
        reversed = reversed -> next;
    }
    return true;
    
}

// Function to create a new node in the linked list
Node* newNode(char key) {
    Node* temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}

// Function to create a linked list based on user input
Node* createLinkedList() {
    Node* head = NULL;
    Node* tail = NULL;
    char val;
    while (true) {
        cin >> val;
        if (val == '$') {
            break;
        }

        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

int main() {
    Node* head = createLinkedList();

    bool palindrome = isPalindrome(head);
    if (palindrome) {
        cout << "The linked list is a palindrome" << endl;
    } else {
        cout << "The linked list is not a palindrome" << endl;
    }

    return 0;
}

//--------------LECTURE- 10---------
/*
Problem Statement



Elsa is organizing a sequence of data stored in a singly linked list and aims to streamline the list by removing nodes positioned at even indices. The linked list nodes are inserted at the end by getting the input from the user.



Your task is to implement a program that reads the list data, removes the nodes at even positions, and outputs the modified list.



Company Tags: TCS

Input format :
The first line of input consists of an integer n, representing the number of elements in the linked list.

The second line contains n space-separated, each representing an element of the linked list.

Output format :
The first line of output displays "Original Linked List: " followed by the elements of the linked list before deletion.

The second line displays "Final Linked List: " followed by the elements of the linked list after the deletion of the even-positioned nodes.



Refer to the sample output for format specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1≤ n ≤ 100

-10000 ≤ elements ≤ 10000

Sample test cases :
Input 1 :
5
100 200 300 10000 9999
Output 1 :
Original Linked List: 100 200 300 10000 9999 
Final Linked List: 100 300 9999 
Input 2 :
3
-10000 -2000 -3000
Output 2 :
Original Linked List: -10000 -2000 -3000 
Final Linked List: -10000 -3000 
*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertNode(Node* head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

Node* deleteEvenPositionNodes(Node* head) {
    if(head == nullptr && head -> next == nullptr){
        return NULL;
    }
    
    int count = 0;
    Node* current = head;
    Node* prev = nullptr;
    while(current != nullptr){
        count++;
        if(count % 2 == 0){
            prev -> next = current -> next;
            Node* temp = current;
            current = current -> next;
            delete(temp);
        }else{
            prev = current;
            current = current -> next;
        }
    }
    return head;
}

void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int size;

    cin >> size;

    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        // insertNode(head, value);
        head = insertNode(head, value);
    }

    cout << "Original Linked List: ";
    displayLinkedList(head);

    // deleteEvenPositionNodes(&head);
    head = deleteEvenPositionNodes(head);

    cout << "Final Linked List: ";
    displayLinkedList(head);

    Node* temp = head;
    while (head != nullptr) {
        head = head->next;
        delete temp;
        temp = head;
    }

    return 0;
}

/*
Problem Statement



Nandha wants to delete a range of nodes between two given positions in a singly linked list. Write a program that takes input for the size of the linked list, the elements of the linked list, the start position, and the end position. The program should delete the nodes between the specified positions and display the updated linked list.



Company Tags: TCS

Input format :
The first line contains an integer 'n' representing the size of the linked list.

The second line contains 'n' space-separated integers representing the elements of the linked list.

The third line contains an integer 'S' representing the start position.

The fourth line contains an integer 'E' representing the end position.

Output format :
The first line of output displays "Linked List before deletion: " followed by the linked list before deletion.

The second line of output displays "Linked List after deletion: " followed by the linked list after deletion.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 100

-50000 ≤ elements ≤ 50000

1 ≤ S ≤ 100

1 ≤ E ≤ 100

Sample test cases :
Input 1 :
5
1 2 3 4 5
1
3
Output 1 :
Linked List before deletion: 1 2 3 4 5 
Linked List after deletion: 4 5 
Input 2 :
5
-50000 50000 4000 3676 7263
1
5
Output 2 :
Linked List before deletion: -50000 50000 4000 3676 7263 
Linked List after deletion: all the elements are deleted
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertNode(Node* head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        return newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

Node* deleteNodesInRange(Node* head, int start, int end) {
    if(head == nullptr && start <= end){
        return nullptr;
    }
    
    Node* current = head;
    Node* previous = nullptr;
    int position = 1;
    while(current != nullptr && position < start){
        previous = current;
        current = current -> next;
        position++;
    }
    
    while(current != nullptr && position <= end){
        Node* temp = current;
        current = current -> next;
        delete temp;
        position++;
    }
    
    if(previous == nullptr){
        return current;
    }else{
        previous -> next =current;
    }
    return head;
    
}

void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deleteLinkedList(Node* head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
    return head;
}

int main() {
    Node* head = nullptr;
    int size;

    cin >> size;

    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        head = insertNode(head, value);
    }

    int start, end;
    cin >> start;
    cin >> end;

    cout << "Linked List before deletion: ";
    displayLinkedList(head);

    head = deleteNodesInRange(head, start, end);

    if (head == nullptr) {
        cout << "Linked List after deletion: all the elements are deleted" << endl;
    } else {
        cout << "Linked List after deletion: ";
        displayLinkedList(head);
    }

    head = deleteLinkedList(head);

    return 0;
}

/*
--------------------------Lecture 12----------------------
*/

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

Node* createNode(int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;
    return newNode;
}

void insert(Node* header, int newData) {
    Node* newNode = createNode(newData);
    if(header -> next == nullptr){
        header -> next = newNode;
        // newNode -> next = header;
    }else{
        Node* current = header -> next;
        while(current -> next != header){
            current = current -> next;
        }
        current -> next = newNode;
    }
    newNode -> next = header;
    header -> data += 1;
    // return header;
    
}

void printAlternateNodes(Node* header) {
    if(header -> next == nullptr){
        cout<<"Linked List is empty"<<endl;
    }else{
        cout<<"Alternate Nodes: ";
        Node* current = header->next;
        // do{
        //     cout<<current -> data <<" ";
        //     current = current -> next -> next;
        // }while(current -> next != header );
        while(current -> next != header ){
            cout<<current -> data <<" ";
            current = current -> next -> next;
            if(current -> next == header)
            cout<<current -> data <<" "<<endl;
        }
    }
    
}

void deleteList(Node*& header) {
    if (header->next == nullptr) {
        delete header;
        header = nullptr;
        return;
    }

    Node* current = header->next;
    Node* nextNode;

    while (current != header) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    delete header;
    header = nullptr;
}

int main() {
    Node* header = new Node;
    header->next = nullptr;

    int listSize;
    std::cin >> listSize;

    for (int i = 0; i < listSize; i++) {
        int newData;
        cin >> newData;

        // Insert node
        insert(header, newData);
    }

    printAlternateNodes(header);

    deleteList(header);

    return 0;
}

/* Question 2*/
#include <iostream>
#include <string>
using namespace std;
struct Message {
    string content;
    Message* next;
};

Message* createMessageNode(const string& content) {
    Message* newMessage = new Message();
    newMessage->content = content;
    newMessage->next = nullptr;
    return newMessage;
}

Message* insertMessage(Message* head, string content) {
    Message* newMessage = createMessageNode(content);

    if (head -> next == nullptr) {
        head->next = newMessage;
        newMessage->next = head;
    } else {
        Message* current = new Message();
        current = head -> next;
        while(current -> next != head){
            current = current -> next;
        }
        current -> next = newMessage;
        newMessage -> next = head;
    }

    return head;
}

Message* reverseInsertedMessages(Message* head) {
    if(head == nullptr){
        return head;
    }else{
        Message* prev = head;
        Message* temp = head;
        Message* current = head -> next;
        
        prev -> next = prev;
        while(current != head){
            temp = current -> next;
            current -> next = prev;
            head -> next = current;
            prev = current;
            current = temp;
        }
        head = prev;
    }
}

void displayMessages(Message* head) {
    if (head == nullptr) {
        cout << "Message queue is empty!" << endl;
        return;
    }

    Message* temp = head;
    cout << "Message Queue: " << endl;
    do {
        cout << "- " << temp->content << endl;
        temp = temp->next;
    } while (temp -> next != head);
    cout << endl;
}

int main() {
    Message* head = new Message();
    head -> next = nullptr;
    int numMessages;

    cin >> numMessages;

    cin.ignore();

    for (int i = 0; i < numMessages; i++) {
        string content;
        getline(cin, content);
        head = insertMessage(head, content);
    }


    head = reverseInsertedMessages(head);
    displayMessages(head);

    return 0;
}

/* ------------------Lecture 13--------------------
Question 1*/
#include <iostream>
#include <string>

struct Node {
    std::string data;
    Node* prev;
    Node* next;
};

void insertAtBeginning(Node** head, const std::string& newData) {
    Node* newNode = new Node;
    newNode -> data = newData;
    newNode -> prev = nullptr;
    newNode -> next = *head;

    if (*head != nullptr)
        (*head)->prev = newNode;

    *head = newNode;
}

int countUniqueInteractions(Node* head) {
    Node* key = head;
    int count = 0;
    while(key != nullptr){
        count++;
        Node* match = key -> next;
        while(match  != nullptr){
            if(key -> data == match -> data){
                count--;
            }
            match = match -> next;
        }
        key = key -> next;
    }
    return count;
}

int main() {
    Node* head = nullptr;
    int n;
    std::string data;

    std::cin >> n;

    // Create the doubly linked list
    for (int i = 0; i < n; i++) {
        std::cin >> data;
        insertAtBeginning(&head, data);
    }

    int uniqueInteractions = countUniqueInteractions(head);

    std::cout << "Number of unique user interactions: " << uniqueInteractions << std::endl;

    return 0;
}
/* ------------------Lecture 13--------------------
Question 2*/

#include<iostream>
using namespace std;

struct Node
{
	char data;
	Node* next;
	Node* pre;
};

Node* createNode(char value){
    Node* newNode = new Node();
    newNode-> data = value;
    newNode -> next = nullptr;
    newNode -> pre = nullptr;
    return newNode;
}

Node* insertAtTail(Node* head, char data)
{
    Node* newNode = createNode(data);
    
    if(head == nullptr ){
        head = newNode;
        return head;
    }else{
        Node* current = head;
        while(current -> next != nullptr){
            current = current -> next;
        }
        current -> next = newNode;
        newNode -> pre = current;
        return head;
    }
}

void rotateByN(Node* &head, int pos){  
    if (!head || pos <= 0){
        return;  // Check if head is null or invalid position    
    }
Node* current = head;    
Node* newHead = nullptr;    
int count = 1;    // Traverse the list to the (pos)th node    
while (count < pos && current->next != nullptr) {
    current = current->next;        
    count++;    
    
}    
if (current->next == nullptr)
return;  // If pos is greater than the length of the list   
// Now current is at the (pos)th node    
newHead = current->next;   
newHead->pre = nullptr;    
current->next = nullptr;    // Find the last node    
Node* temp = newHead;   
while (temp->next != nullptr) { 
    temp = temp->next;    
    
}        // Connect last node with original head  
temp->next = head;    
head->pre = temp;    // Update head    
head = newHead;
    
}

void display(Node* head)
{
    Node* current = head;
    while(current != nullptr){
        cout<<current->data<<" ";
        current = current -> next;
    }cout<<endl;
}

// void rotateByN(Node* head, int pos)
// {
//     Node* temp = head;
//     while(pos > 2){
//         temp = temp -> next;
//         pos--;
//     }
//     Node* lastTemp = temp -> next;
//     while(lastTemp -> next != nullptr){
//         lastTemp = lastTemp -> next;
//     }
//     lastTemp -> next = head;
//     head -> pre = lastTemp;
//     temp -> next -> pre = nullptr;
//     temp -> next = nullptr;
//     head = temp -> next;
// }

int main()
{
// 	Node* head = new Node();
// 	head -> next = nullptr;
// 	head -> pre = nullptr;
    Node* head = nullptr;
	int n;
	char data;
	cin>>n;
    cin.ignore(); // Ignore the newline character

    for (int i = 0; i < n; i++) {
        cin>>data;
        head = insertAtTail(head, data);
    }
	int k;
	cin>>k;
	rotateByN(head, k);
	display(head);
	return 0;
}
/* ------------------Lecture 13--------------------
Question 3*/

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* prev;
    Node* next;
};

void insertAtBeginning(Node** head, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->prev = nullptr;
    newNode->next = *head;

    if (*head != nullptr)
        (*head)->prev = newNode;

    *head = newNode;
}

Node* reverseList(Node* head) {
    Node* lastNode = head;
    if(head == nullptr || head -> next == nullptr){
        return head;
        // head = nullptr;
    }
    
    Node* prev = nullptr;
    Node* curr = head;
    while(curr != nullptr){
        prev = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = prev;
        
        curr = curr -> prev;
    }
    return prev -> prev;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;
    int n, data;

    cin >> n;

    // Create the doubly linked list
    for (int i = 0; i < n; i++) {
        std::cin >> data;
        insertAtBeginning(&head, data);
    }

    std::cout << "Original List: ";
    printList(head);

    // Reverse the list
    head = reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
// hare and tortois algorithm