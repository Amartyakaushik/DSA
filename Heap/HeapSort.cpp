#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int n, int i){
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // left = 2*i +
    int right = 2 * i + 2; // right = 2*i +
    // Check if left child of root exists and is greater than root
    if (left < n && arr[left] > arr[largest]){
        largest = left;
    }
    // Check if right child of root exists and is greater than root
    if (right < n && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != i){
        swap(&arr[largest], &arr[i]);
    }

    // heapify(arr, n, largest);
    // for(int i = n -1; i >= 0; i--){
    //     swap(&arr[i], &arr[0]);
    // }
}

void heapSort(int arr[], int size){
    int n = size;
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }

}

void display(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    // Extract element from heap one by one
    for (int i = size - 1; i > 0; i--){
        swap(&arr[i], &arr[0]);
        heapify(arr, i, 0);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int largest = (n - 1) / 2;
    heapify(arr,n,largest);
    display(arr, n);
}