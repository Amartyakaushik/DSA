#include<iostream>
using  namespace std;
void mergeSort(int[] arr, int left, int right){   
    if (left < right) {
        return;
    }
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr,right, mid);
    merge(arr,left,mid,right);
}
void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for(int i = 0; i< n1; i++ ){
        L[i] = arr[left +1];
    }
    for(int j = 0; j<n2; j++){
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k++] = L[i++];
        }else{
            arr[k++] = R[j++];
        }
    }

    while(i < n1){
        arr[k++] = L[i++];
    }
    
    while(j < n2){
        arr[k++] = L[j++];
    }

}
// void merge(int)

void display(int arr[] , int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] <<" ";
    }cout<<endl;
}

int main(){
    int arr = [1,3,54,22,4,12,111];
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    // mergeSort(arr, size);
}

//Inversion count