#include<iostream>
using namespace std;
int insertElement(int arr[], int n, int key, int cap){
	if(n >= cap){
		cout<<"Out of capacity";
		return n;
	}
	arr[n] = key;
	return n+1;
}

int main(){
	int arr[12] = {2,12,121,4,1};
	int key, position;
	cout<<"Enter key element: ";
	cin>>key;
	cout<<"Enter position: ";
	cin>>position;
	cout<<"Before insertion: ";
	for(int i = 0; i < 5; i++){
		cout<<arr[i]<<" ";
	}
		cout<<endl;
	insertElement(arr, position, key, 12);
	cout<<"After insertion: ";
	for(int i = 0; i < 6; i++){
		cout<<arr[i]<<" ";
	}
		cout<<endl;
	
}