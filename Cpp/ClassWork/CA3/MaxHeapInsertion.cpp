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

void heapSort(int arr[], int n){
    int size = n;
    while(size > 1){
        swap(arr[0], arr[size - 1]);
        size--;
        heapify(heap,size,1);
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
    print();

    // insertMin(34);
    // insertMin(44);
    // insertMin(54);
    // insertMin(24);
    // insertMin(38);
    // insertMin(14);

    // print();

}