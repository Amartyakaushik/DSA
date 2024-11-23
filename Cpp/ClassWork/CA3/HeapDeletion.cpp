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


void deleteMax(){
    if(heapSize == 0){
        cout<<"Heap is empty"<<endl;
    }
    heap[0] = heap[heapSize - 1];
    heapSize--;

    int i = 1;
    while(i < heapSize){
        int leftIndex = i * 2 + 1;
        int rightIndex = i * 2 + 2;

        if(leftIndex < heapSize && heap[leftIndex] > heap[i]){
            i = leftIndex;
            swap(heap[leftIndex], heap[i]);
        }else if(rightIndex < heapSize && heap[rightIndex] > heap[i]){
            i = rightIndex;
            swap(heap[rightIndex], heap[i]);
        }else{
            return;
        }
    }
}


void deleteMin(){
    if(heapSize == 0){
        cout<<"Heap is empty"<<endl;
    }
    heap[0] = heap[heapSize - 1];
    heapSize--;

    int i = 1;
    while(i < heapSize){
        int leftIndex = i * 2 + 1;
        int rightIndex = i * 2 + 2;

        if(leftIndex < heapSize && heap[leftIndex] < heap[i]){
            i = leftIndex;
            swap(heap[leftIndex], heap[i]);
        }else if(rightIndex < heapSize && heap[rightIndex] < heap[i]){
            i = rightIndex;
            swap(heap[rightIndex], heap[i]);
        }else{
            return;
        }
    }
}
void print(){
    for(int i = 0; i < heapSize; i++){
        cout<<heap[i]<<" ";
    }cout<<endl;
}

int main(){
    // insert(34);
    // insert(44);
    // insert(54);
    // insert(24);
    // insert(38);
    // insert(14);
    // print();

    // deleteMax();
    // print();

    insertMin(34);
    insertMin(44);
    insertMin(54);
    insertMin(24);
    insertMin(38);
    insertMin(14);
    print();
    deleteMin();
    print();


}