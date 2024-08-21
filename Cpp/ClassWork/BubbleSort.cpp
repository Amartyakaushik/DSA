#include<iostream>
using namespace std;
void bubbleSort(int arr[], int size){
	int i,j;
	for(i = 0; i<size-1; i++){
		for(j =0; j<size-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}	
	}
	
	for(int a=0; a<size; a++){
		cout<<arr[a]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[] = {12,2,23,5,122,2222,3,7};
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr,size);
}