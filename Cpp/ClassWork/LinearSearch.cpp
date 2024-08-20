#include<iostream>
using namespace std;
int main(){
	int arr[6] = {1,2,6,4,5,9};
	int key;
	cout<<"Enter key element to find: ";
	cin>>key;
	for(int i = 0; i < 6; i++){
		if(key == arr[i]){
			cout<<key<<" found at index "<<i<<endl;
		}
	}
}