//-------lecture 6---
/* Question 1
Input format :
The first line of input is an integer n, representing the number of contacts.

The second line of input consists of n space-separated strings representing the names.

Output format :
The first line of output prints "Initial order: " followed by the names in the given order, separated by space.

The following n-1 lines print "After Iteration X: Y" where X is the iteration number and Y is the result after each iteration separated by space.

The last line of output prints "Sorted order: " representing the names in sorted order, separated by space.



Refer to the sample output for formatting specifications.

Code constraints :
The strings contain both uppercase and lowercase letters, with 50 characters at most.

Sample test cases :
Input 1 :
3
Lucifer Ellen Annabell
Output 1 :
Initial order: Lucifer Ellen Annabell 
After Iteration 1: Ellen Lucifer Annabell 
After Iteration 2: Annabell Ellen Lucifer 
Sorted order: Annabell Ellen Lucifer 
Input 2 :
6
Zayn Liam Niall Harry Louis Larry
Output 2 :
Initial order: Zayn Liam Niall Harry Louis Larry 
After Iteration 1: Liam Zayn Niall Harry Louis Larry 
After Iteration 2: Liam Niall Zayn Harry Louis Larry 
After Iteration 3: Harry Liam Niall Zayn Louis Larry 
After Iteration 4: Harry Liam Louis Niall Zayn Larry 
After Iteration 5: Harry Larry Liam Louis Niall Zayn 
Sorted order: Harry Larry Liam Louis Niall Zayn 
*/

#include<iostream>
#include<iomanip>
using namespace std;

void bubbleSort(float arr[], int n){
        bool yes = false;
    for(int i = 0; i < n-1 ; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1] ){
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                yes = true;
            }
        }
        
        if(yes){
            
        cout<<"After iteration "<<i + 1<<": ";
        for(int k = 0; k<n; k++){
            cout<<fixed<<setprecision(2)<<arr[k]<<" ";
        }
        cout<<endl;
        yes = false;
        }
    }
    cout<<"Sorted array: ";
        for(int k = 0; k<n; k++){
            cout<<fixed<<setprecision(2)<<arr[k]<<" ";
        }
        cout<<endl;
}
int main(){
    int n;
    cin>>n;
    float arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
}

/*Q2
On the first day of school, students randomly seat themselves. Shorter students at the back can't see the board because they're behind taller students. To fix this, the teacher decides to arrange the students in height order.



The teacher asks the students to stand in a line. She repeatedly compares the height of the first student with each of the others. If the first student is taller, they swap places. This process continues for all students, sorting them by height.



Write a program to perform this selection sort on N students.

Input format :
The first line of input consists of an integer N, representing the number of students.

The second line consists of N space-separated integers representing the height of N students.

Output format :
The output displays the height order of students before sorting and after sorting. Also, print after each iteration.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

2 ≤ N ≤ 50

100 ≤ height of the students ≤ 200

Sample test cases :
Input 1 :
6
130 123 134 145 132 111
Output 1 :
Student's height order before sorting: 130 123 134 145 132 111 
Height order of students after iteration 1: 111 123 134 145 132 130 
Height order of students after iteration 2: 111 123 134 145 132 130 
Height order of students after iteration 3: 111 123 130 145 132 134 
Height order of students after iteration 4: 111 123 130 132 145 134 
Height order of students after iteration 5: 111 123 130 132 134 145 
After final comparison of all students, the height order becomes: 111 123 130 132 134 145 
Input 2 :
5
106 205 101 102 104
Output 2 :
Student's height order before sorting: 106 205 101 102 104 
Height order of students after iteration 1: 101 205 106 102 104 
Height order of students after iteration 2: 101 102 106 205 104 
Height order of students after iteration 3: 101 102 104 205 106 
Height order of students after iteration 4: 101 102 104 106 205 
After final comparison of all students, the height order becomes: 101 102 104 106 205 

*/

#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
            cout<<"Student's height order before sorting: ";
            for(int k =0; k<size; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
            
            for(int i = 0; i<size -1; i++){
            int minIndex = i;
                for(int j = i +1; j<size; j++){
                    
                if(arr[minIndex] > arr[j]){
                    minIndex = j;
                }
                }
                if(minIndex != i){
                    int temp = arr[i];
                    arr[i] = arr[minIndex];
                    arr[minIndex] = temp;
                }
            cout<<"Height order of students after iteration "<<i+1<<": ";
            for(int k =0; k<size; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
    }
            cout<<"After final comparison of all students, the height order becomes: ";
            for(int k =0; k<size; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
}

/*  Q3
You are developing a contact management system for customer relationship management (CRM) software. As part of the system, you need to implement a feature that sorts the contact names in alphabetical order.



Write a program that prompts the user to enter the number of contacts and their respective names. The program should then use the insertion sort algorithm to sort the contact names in alphabetical order. After sorting, the program should display the contact names, now arranged in alphabetical order, after each iteration.



Company Tags: CTS

Input format :
The first line of input is an integer n, representing the number of contacts.

The second line of input consists of n space-separated strings representing the names.

Output format :
The first line of output prints "Initial order: " followed by the names in the given order, separated by space.

The following n-1 lines print "After Iteration X: Y" where X is the iteration number and Y is the result after each iteration separated by space.

The last line of output prints "Sorted order: " representing the names in sorted order, separated by space.



Refer to the sample output for formatting specifications.

Code constraints :
The strings contain both uppercase and lowercase letters, with 50 characters at most.

Sample test cases :
Input 1 :
3
Lucifer Ellen Annabell
Output 1 :
Initial order: Lucifer Ellen Annabell 
After Iteration 1: Ellen Lucifer Annabell 
After Iteration 2: Annabell Ellen Lucifer 
Sorted order: Annabell Ellen Lucifer 
Input 2 :
6
Zayn Liam Niall Harry Louis Larry
Output 2 :
Initial order: Zayn Liam Niall Harry Louis Larry 
After Iteration 1: Liam Zayn Niall Harry Louis Larry 
After Iteration 2: Liam Niall Zayn Harry Louis Larry 
After Iteration 3: Harry Liam Niall Zayn Louis Larry 
After Iteration 4: Harry Liam Louis Niall Zayn Larry 
After Iteration 5: Harry Larry Liam Louis Niall Zayn 
Sorted order: Harry Larry Liam Louis Niall Zayn 
*/

#include<iostream>
using namespace std;
void insertionSort(string arr[], int size){
    cout<<"Initial order: ";
    for(int in = 0; in < size; in++){
        cout<<arr[in]<<" ";
    }
    cout<<endl;
    for(int i =1; i<size; i++){
        string key = arr[i];
        int j = i -1;
        while(arr[j] > key && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        
        cout<<"After Iteration "<<i<<": ";
        for(int k = 0; k<size; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sorted order: ";
    for(int in = 0; in < size; in++){
        cout<<arr[in]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    
    insertionSort(arr,n);
}

/*   Q4
You are working on a ticketing system for a popular event. As part of the system, you need to implement a feature that finds the kth smallest ticket price among all the available tickets.



Write a program that takes user input for the number of tickets and their respective prices. The program should use the selection sort algorithm to sort the ticket prices in non-decreasing order. After sorting, it should display the sorted order of the ticket prices and display the kth smallest ticket price from the sorted list.



Company Tags: Capgemini 

Input format :
The first line of input consists of an integer n, representing the number of tickets.

The second line of input consists of n space-separated integers, representing the prices of the tickets.

The third line of input consists of an integer k, representing the position of the ticket price to find (1-indexed).

Output format :
The first line of output displays "Sorted order: " followed by n space-separated integers, representing the sorted array of ticket prices.

The second line of output displays "The kth smallest element is: " followed by an integer, representing the kth smallest ticket price.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ n ≤ 15

1 ≤ k < n

1 ≤ ticket price ≤ 100

Sample test cases :
Input 1 :
5
1 4 7 8 5
3
Output 1 :
Sorted order: 1 4 5 7 8 
The kth smallest element is: 5
Input 2 :
9
7 9 6 8 4 5 3 2 1
6
Output 2 :
Sorted order: 1 2 3 4 5 6 7 8 9 
The kth smallest element is: 6
*/

#include<iostream>
using namespace std;
void selectionSort(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        int minIndex = i;
        for(int j = i +1; j<size; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    
    cout<<"Sorted order: ";
    int index = 0;
    for(int k = 0; k<size; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    
    cout<<"The kth smallest element is: "<<arr[key-1];
}

int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cin>>key;
    selectionSort(arr,n,key);
}

// /* Q5
// Given an array of integers, implement the insertion sort algorithm that sorts elements at odd positions in descending order and elements at even positions in ascending order. Input consists of an integer n followed by n integers. Output the sorted array. Here, the position starts from 1.



// Example



// Input:

// array[] = {7, 10, 11, 3, 6, 9, 2, 13, 0}



// Output:      

// 11 3 7 9 6 10 2 13 0 



// Explanation:

// Even-positioned elements are 10 3 9 13. After sorting in ascending order: 3 9 10 13

// Odd-positioned elements are 7 11 6 2 0. After sorting in descending order: 11 7 6 2 0

// Final combined array: 11 3 7 9 6 10 2 13 0 

// Input format :
// The first line of input consists of an integer N, representing the number of elements.

// The second line consists of N space-separated integers representing the elements.

// Output format :
// The output displays the sorted array as described in the problem statement, separated by a space.



// ﻿Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 30

// 0 ≤ elements ≤ 105

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// Output 1 :
// 5 2 3 4 1 
// Input 2 :
// 9
// 7 10 11 3 6 9 2 13 0
// Output 2 :
// 11 3 7 9 6 10 2 13 0 
// */

#include<iostream>
using namespace std;
void insertionSort(int arr[], int size){
    for(int i = 2; i < size; i++){
        if(i % 2 == 0){
            int j = i -2;
            int key = arr[i];
            while(arr[j] < key && j >= 0){
                arr[j+2] = arr[j];
                j -= 2;
            }
            arr[j+2] = key;
        }else{
            int j = i -2;
            int key = arr[i];
            while(arr[j] > key && j >= 0){
                arr[j+2] = arr[j];
                j -= 2;
            }
            arr[j+2] = key;
            
        }
    }
    
    for(int k = 0; k< size; k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    insertionSort(arr,n);
}

// #include<iostream>
// using namespace std;

// void mergeSort(int arr1[], int size1, int arr2[], int size2){
// 	    int mergedSize = size1 + size2;

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

// //-----------------------Unit 01 --------static Model question-----------
/*
Problem Statement
1


You're managing the inventory levels of different items in a warehouse. The inventory levels are stored in an array of integers, where each integer represents the quantity of a specific item. 



You will perform the following operations:

1.	Traversal: Go through the list of inventory quantities to verify the stock levels.

2.	Insertion: Add a new item to the inventory, updating the quantity.

3.	Deletion: Remove an item from the inventory when it is out of stock.

Input format :
The first line of input contains an integer x, representing the number of items in the inventory.

The second line contains x space-separated integers, each representing the quantity of an item in the inventory.

The third line contains an integer n, representing the number of items to be newly added.

The fourth line contains n space-separated integers, each representing the quantity of a new item to be added to the inventory.

The fifth line contains an integer m, representing the number of items to be removed.

The sixth line contains m space-separated integers, each representing the quantity of an item to be removed from the inventory.

Output format :
The first line of output prints "Inventory List: " followed by the quantities of the items in the inventory, separated by spaces.

After each insertion:

Print "Inserting Item: " followed by the quantity of the new item being added.
Print "Inventory List: " followed by the updated inventory quantities, separated by spaces.
After each deletion:

Print "Removing Item: " followed by the quantity of the item being removed.
Print "Inventory List: " followed by the updated inventory quantities, separated by spaces.


Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ x ≤ 10

1 ≤ n, m ≤ 5

Sample test cases :
Input 1 :
3
50 120 30
2
75 200
2
120 50
Output 1 :
Inventory List: 50 120 30 
Inserting Item: 75
Inventory List: 50 120 30 75 
Inserting Item: 200
Inventory List: 50 120 30 75 200 
Removing Item: 120
Inventory List: 50 30 75 200 
Removing Item: 50
Inventory List: 30 75 200 
Input 2 :
4
12 78 35 69
1
42
3
42 35 69
Output 2 :
Inventory List: 12 78 35 69 
Inserting Item: 42
Inventory List: 12 78 35 69 42 
Removing Item: 42
Inventory List: 12 78 35 69 
Removing Item: 35
Inventory List: 12 78 69 
Removing Item: 69
Inventory List: 12 78 
*/

#include <iostream>
using namespace std;

#define MAX_SIZE 100

void traverseInventory(int inventory[], int size) {
    cout<<"Inventory List: ";
    for(int i = 0; i<size; i++){
        cout<<inventory[i]<<" ";
    }
    cout<<endl;
}

void insertItem(int inventory[], int &size, int item) {
    cout<<"Inserting Item: "<<item<<endl;
    inventory[size] = item;
    size++;
    cout<<"Inventory List: ";
    for(int i = 0; i<size; i++){
        cout<<inventory[i]<<" ";
    }
    cout<<endl;
}

void removeItem(int inventory[], int &size, int item) {
    cout<<"Removing Item: "<<item<<endl;
    int pos;
    for(int i =0; i<size; i++){
        if(inventory[i] == item){
            pos = i;
        }
    }
    
    for(int i = pos; i<size; i++){
        inventory[i] = inventory[i+1];
    }
    size--;
    cout<<"Inventory List: ";
    for(int i = 0; i<size; i++){
        cout<<inventory[i]<<" ";
    }
    cout<<endl;
    //Type your code here
    
}

int main() {
    int inventory[MAX_SIZE];
    int size, n, m;
    int newItems[MAX_SIZE];
    int deleteItems[MAX_SIZE];

    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> inventory[i];
    }

    traverseInventory(inventory, size);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> newItems[i];
    }
    for (int i = 0; i < n; i++) {
        insertItem(inventory, size, newItems[i]);
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> deleteItems[i];
    }
    for (int i = 0; i < m; i++) {
        removeItem(inventory, size, deleteItems[i]);
    }

    return 0;
}

/*
Problem Statement 2



You're managing a list of product IDs on an e-commerce platform. Each product ID is an integer representing a unique product. You need to search for specific products in the list using two different search methods: linear search and binary search.



Linear Search: This method is used when the list of product IDs is unsorted. You'll traverse the entire list to find the desired product ID.
Binary Search: This method is used when the list of product IDs is sorted in ascending order. You'll repeatedly divide the list in half to locate the desired product ID.
Input format :
The first line of input contains an integer n, representing the number of products in the list.

The second line contains n space-separated integers, each representing a unique product ID.

The third line contains an integer key, representing the product ID to search for in the list.

Output format :
The first line of output prints which search method is used, either "Using Binary Search" or "Using Linear Search", depending on whether the list is sorted.

The second line prints one of the following:

If the product ID is found, print "[key] found at index [index]". The index value starts from 0.
If the product ID is not found, print "[key] not found in the list".


Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 15

100 ≤ product ID, key ≤ 999

Sample test cases :
Input 1 :
5
101 405 303 604 505
303
Output 1 :
Using Linear Search
303 found at index 2
Input 2 :
5
101 405 303 604 505
308
Output 2 :
Using Linear Search
308 not found in the list
Input 3 :
5
101 205 303 404 505
404
Output 3 :
Using Binary Search
404 found at index 3
Input 4 :
5
101 205 303 404 505
409
Output 4 :
Using Binary Search
409 not found in the list

*/

// You are using GCC
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
    
}

int binarySearch(int arr[], int n, int key) {
        int beg = 0;
        int end = n - 1;
        while(beg <= end){
            int mid = beg + (end - beg) / 2;
            if(arr[mid] == key){
                return mid;
            }else if(arr[mid] < key){
                beg = mid + 1;
            }else if(arr[mid] > key){
                end = mid - 1;
            }
        }
    return -1;
    
}

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int searchArray(int arr[], int n, int key) {
    if (isSorted(arr, n)) {
        cout << "Using Binary Search" << endl;
        return binarySearch(arr, n, key);
    } else {
        cout << "Using Linear Search" << endl;
        return linearSearch(arr, n, key);
    }
}

int main() {
    int n, key;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    cin >> key;

    int result = searchArray(arr, n, key);

    if (result != -1) {
        cout << key << " found at index " << result;
    } else {
        cout << key << " not found in the list";
    }

    return 0;
}

/*
Problem Statement 3



﻿You're managing employee records for a company. The employee IDs from two different departments are stored in two separate arrays, both sorted in ascending order. Your task is to merge these two sorted arrays into a single sorted array, ensuring that the order is maintained.

Input format :
The first line of input contains an integer n, representing the number of employees in the first department.

The second line contains n space-separated integers, each representing a sorted employee ID from the first department.

The third line contains an integer m, representing the number of employees in the second department.

The fourth line contains m space-separated integers, each representing a sorted employee ID from the second department.

Output format :
The output prints the merged sorted employee IDs from both departments.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

0 ≤ n, m ≤ 10

101 ≤ employee ID ≤ 990

Sample test cases :
Input 1 :
4
101 203 305 407
4
102 204 306 408
Output 1 :
101 102 203 204 305 306 407 408 
Input 2 :
4
101 203 305 407
4
203 305 508 609
Output 2 :
101 203 203 305 305 407 508 609 
Input 3 :
3
102 204 306
0
Output 3 :
102 204 306 
Input 4 :
2
101 202
4
150 250 350 450
Output 4 :
101 150 202 250 350 450 
*/

#include<iostream>
using namespace std;

void mergeSort(int arr1[], int size1, int arr2[], int size2){
    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];
    int i=0, j=0, k=0;
    while(i<size1 && j<size2){
        if(arr1[i] <= arr2[j]){
            mergedArray[k++] = arr1[i++];
        }else{
            mergedArray[k++] = arr2[j++];
        }
    }
    
    while(i<size1){
        mergedArray[k++] = arr1[i++];
    }
    
    while(j<size2){
        mergedArray[k++] = arr2[j++];
    }
    
    for(int i = 0; i<mergedSize; i++){
        cout<<mergedArray[i]<<" ";
    }
}

int main(){
    int n,m;
    cin>>n;
    int arr1[n];
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }
    
    cin>>m;
    int arr2[m];
    for(int i = 0; i<m; i++){
        cin>>arr2[i];
    }
    
    mergeSort(arr1, n, arr2, m);
}

/*  4   Problem Statement



You're an instructor managing a list of exam scores for a group of students. The scores are stored in an array, and you need to sort this array in ascending order so that you can easily identify the highest and lowest scores. You'll use two different sorting algorithms: bubble sort and selection sort.



Bubble sort is selected if the array is nearly sorted. An array is considered nearly sorted if at most one pair of elements is out of order. The selection sort is chosen if the array is not nearly sorted.

Input format :
The first line of input contains an integer n, representing the number of students.

The second line contains n space-separated integers, representing the exam scores of students.

Output format :
The first line of output prints which sort algorithm is used, either "Using Bubble Sort" or "Using Selection Sort".

The second line prints the sorted exam scores in ascending order.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 20

1 ≤ exam score ≤ 100

Sample test cases :
Input 1 :
6
64 78 85 92 99 73
Output 1 :
Using Bubble Sort
Sorted Exam Scores: 64 73 78 85 92 99 
Input 2 :
5
32 91 53 76 28
Output 2 :
Using Selection Sort
Sorted Exam Scores: 28 32 53 76 91 
*/

// You are using GCC
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i -1; j++){
            if(arr[j +1] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void selectionSort(int scores[], int n) {
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(scores[j] < scores[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            int temp = scores[i];
            scores[i] = scores[minIndex];
            scores[minIndex] = temp;
        }
    }
}

bool isNearlySorted(int scores[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (scores[i] > scores[i + 1]) {
            count++;
            if (count > 1) { 
                return false;
            }
        }
    }
    return true;
}

void sortArray(int scores[], int n) {
    if (isNearlySorted(scores, n)) {
        cout << "Using Bubble Sort" << endl;
        bubbleSort(scores, n);
    } else {
        cout << "Using Selection Sort" << endl;
        selectionSort(scores, n);
    }
}

void printArray(int scores[], int n) {
    for (int i = 0; i < n; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int examScores[n];
    for (int i = 0; i < n; i++) {
        cin >> examScores[i];
    }

    sortArray(examScores, n);

    cout << "Sorted Exam Scores: ";
    printArray(examScores, n);

    return 0;
}

/*  5    Problem Statement



You're a coach managing a list of finishing times for athletes in a race. The times are stored in an array, and you need to sort this array in ascending order to determine the rankings.



You'll use the insertion sort algorithm to accomplish this.

Input format :
The first line of input contains an integer n, representing the number of athletes.

The second line contains n space-separated integers, each representing the finishing time of an athlete in seconds.

Output format :
The output prints the sorted finishing times of the athletes in ascending order.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 20

10 ≤ finishing time ≤ 120

Sample test cases :
Input 1 :
5
75 89 65 90 70
Output 1 :
65 70 75 89 90 
Input 2 :
5
60 65 70 75 80
Output 2 :
60 65 70 75 80 
Input 3 :
5
90 85 80 75 70
Output 3 :
70 75 80 85 90 
Input 4 :
5
80 85 80 70 85
Output 4 :
70 80 80 85 85 
*/

#include<iostream>
using namespace std;
void insertionSort(int arr[], int size){
    for(int i = 1; i< size ; i++){
        int j = i -1;
        int key = arr[i];
        while(j >= 0 && arr[j] > key ){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}