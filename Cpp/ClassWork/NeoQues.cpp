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