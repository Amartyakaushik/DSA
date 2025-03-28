#include<iostream>
using namespace std;
#define MAX 100
int heap[MAX];
int heapSize = 0;
// int parent(int i) { return (i - 1) / 2; }
// int left(int i) { return (2 * i) + 1; }
// int right(int i) { return (2 * i) + 2; }
void insert(int value){
    if(heapSize >= MAX){
        cout<<"Heap is full"<<endl;
        return;
    }
    heap[heapSize] = value;
    int current = heapSize;
    heapSize++;

    while(current > 0 && heap[(current - 1) / 2] < heap[current]){
        int temp = heap[current];
        heap[current] = heap[(current - 1) / 2];
        heap[(current - 1) / 2] = temp;
        current = (current - 1) / 2;
    }
    return ;
}

void display(){
    for(int i = 0; i < heapSize; i++){
        cout<<heap[i]<<" ";
        }
        cout<<endl;

}

int main(){
    insert(44);
    insert(33);
    insert(77);
    insert(11);
    insert(55);
    display();
}