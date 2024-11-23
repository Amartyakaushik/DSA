#include<iostream>
using namespace std;

#define MAX 100
int heap[MAX];
int heapSize = 0;

void insert(int val){
    if(heapSize >= MAX){
        cout<<"Heap is full";
    } 
    heap[heapSize] = val;
    int curr = heapSize;
    heapSize++;

    while(curr > 0  && heap[(curr - 1) / 2] < heap[curr]){
        swap(heap[(curr - 1) / 2], heap[curr]);
    }
    return;
}
void insertMin(int val){
    if(heapSize >= MAX){
        cout<<"Heap is full";
    } 
    heap[heapSize] = val;
    int curr = heapSize;
    heapSize++;

    while(curr > 0  && heap[(curr - 1) / 2] > heap[curr]){
        swap(heap[(curr - 1) / 2], heap[curr]);
        curr = (curr - 1) / 2;
    }
    return;
}

void heapify(int heap[], int n, int ix){
    int largest = ix;
    int leftIndex = ix * 2 + 1;
    int rightIndex = ix * 2 + 2;

    if(leftIndex < n && heap[leftIndex] > heap[largest]){
        largest = leftIndex;
    }else if(rightIndex < n && heap[rightIndex] > heap[largest]){
        largest = rightIndex;
    }

    if(largest != ix){
        swap(heap[ix], heap[largest]);
        heapify(heap, n, largest);
    }
}

void print(){
    for(int i = 0; i < heapSize; i++){
        cout<<heap[i]<<" ";
    }cout<<endl;
}

int main(){
    insert(34);
    insert(44);
    insert(54);
    insert(24);
    insert(38);
    insert(14);

    // print();
    int arr[6] = {12,43,122,1,56,32};
    int n = 6;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    for(int i = (n-1)/2; i>=0; i--){
        heapify(arr, n, i);
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // insertMin(34);
    // insertMin(44);
    // insertMin(54);
    // insertMin(24);
    // insertMin(38);
    // insertMin(14);

    // print();

}