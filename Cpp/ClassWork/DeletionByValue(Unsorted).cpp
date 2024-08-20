#include<iostream>
using namespace std;
int findPosition(int arr[], int size, int target){
	int beg = 0;
	int end = size - 1;
	
	while(beg <= end){
	int mid = beg + (end - beg) / 2;
	if(arr[mid] == target){
		return mid;
	}else if(arr[mid] < target){
		beg = mid + 1;
	}else if(arr[mid] > target){
		end = mid - 1;
	}else{
		return -1;
	}
}
}

int deleteElement(int arr[],int pos, int size){
	size = size - 1;
	for(int j=pos; j<size; j++){
		arr[j] = arr[j+1];
	}
	return size;
}

int main(){
	int arr[] = {2,4,6,8,10,13,15,16,18};
	cout<<"This is your array before deletion..."<<endl;
	for(int i:arr){
		cout<<i<<" ";
	}
	cout<<endl;
	int key;
	cout<<"Enter key element to delete: ";
	cin>>key;
	int size = sizeof(arr) / sizeof(arr[0]);
	int position = findPosition(arr, size, key);
	size = deleteElement(arr,position,size);
	cout<<"This is your array after deletion..."<<endl;
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}