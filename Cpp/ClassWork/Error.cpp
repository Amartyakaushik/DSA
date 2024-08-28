#include<iostream>
#include<iomanip>
using namespace std;

void bubbleSort(float arr[], int n){
        bool yes = false;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1] ){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                yes = true;
            }
        }
        
        if(yes){
            
        cout<<"After iteration "<<i + 1<<": ";
        for(int k = 0; k<n; k++){
            cout<<fixed<<setprecision(2)<<arr[k]<<" ";
        }
        cout<<endl;
        yes = false;
        }
    }
}
int main(){
    int n;
    cin>>n;
    float arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    bubbleSort(arr, n);
    cout<<"Sorted array: ";
        for(int k = 0; k<n; k++){
            cout<<fixed<<setprecision(2)<<arr[k]<<" ";
        }
        cout<<endl;
    
    
}