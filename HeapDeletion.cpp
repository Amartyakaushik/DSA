// #include<iostream>
// using namespace std;
// #define MAX 100
// int heap[MAX];
// int heapSize = 0;
// // int parent(int i) { return (i - 1) / 2; }
// // int left(int i) { return (2 * i) + 1; }
// // int right(int i) { return (2 * i) + 2; }
// void insert(int value){
//     if(heapSize >= MAX){
//         cout<<"Heap is full"<<endl;
//         return;
//     }
//     heap[heapSize] = value;
//     int current = heapSize;
//     heapSize++;

//     while(current > 0 && heap[(current - 1) / 2] < heap[current]){
//         int temp = heap[current];
//         heap[current] = heap[(current - 1) / 2];
//         heap[(current - 1) / 2] = temp;
//         current = (current - 1) / 2;
//     }
//     return ;
// }

// int delete( ){
//     if(heapSize <= 0){
//         cout<<"Heap is empty"<<endl;
//         return -1;
//     }

//     int heap[0] = heap[heapSize - 1];
//     heapSize--;
//     int current = 0;
//     while(current * 2 + 1 < heapSize){
//         int max = current * 2 + 1;
//         int right = current * 2 + 2;
//         if(right < heapSize && heap[right] > heap[max]){
//             max = right;
//             }
//         if(heap[current] >= heap[max]){
//             break;
//         }
//             int temp = heap[current];
//             heap[current] = heap[max];
//             heap[max] = temp;
//             current = max;
//     }
//         return max;
// }

// void display(){
//     for(int i = 0; i < heapSize; i++){
//         cout<<heap[i]<<" ";
//         }
//         cout<<endl;

// }

// int main(){
//     insert(44);
//     insert(33);
//     insert(77);
//     insert(11);
//     insert(55);
//     display();

//     delete();
//     display();
// }
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

int delete( ){
    if(heapSize <= 0){
        cout<<"Heap is empty"<<endl;
        return -1;
    }

    int heap[0] = heap[heapSize - 1];
    heapSize--;
    int current = 0;
    while(current * 2 + 1 < heapSize){
        int max = current * 2 + 1;
        int right = current * 2 + 2;
        if(right < heapSize && heap[right] > heap[max]){
            max = right;
            }
        if(heap[current] >= heap[max]){
            break;
        }
            int temp = heap[current];
            heap[current] = heap[max];
            heap[max] = temp;
            current = max;
    }
        return max;
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

    delete();
    display();
}