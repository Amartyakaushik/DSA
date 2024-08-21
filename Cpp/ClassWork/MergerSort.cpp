#include<iostream>
using namespace std;
void mergeSort(int arr1[], int arr2[], int arr3[], int n1, int n2){
	int i = 0, j = 0, k = 0;
	while(i < n1 && j <n2){
		if(arr1[i] < arr2[j]){
			arr3[k++] = arr1[i++];
		}else{
			arr3[k++] = arr2[j++];
		}
	}	
		while(i < n1){
			arr3[k++] = arr1[i++];
		}
		while(j < n2){
			arr3[k++] = arr2[j++];
		}
		
		for(int a : arr3){
			cout<<a<<" ";
		}

//		for(int a =0; a<k; a++){
//			cout<<arr3[a]<<" ";
//		}
		cout<<endl;
		
}

int main(){
	int arr1[] = {1,2,3,4};
	int arr2[] = {5,6,7,8,9};
	int size = sizeof(arr1)/sizeof(int);
	int size2 = sizeof(arr2)/sizeof(int);
	
//	cout<<size<<" "<<size2;
	int arr3[size + size2];
	mergeSort(arr1,arr2,arr3,size,size2);
	
}