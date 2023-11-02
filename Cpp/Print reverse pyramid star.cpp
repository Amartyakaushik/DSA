#include <iostream>
using namespace std;

//Print reverse pyramid star
int main()
{
    int size;
    cout<<"Enter the size of matrix: ";
    cin>>size;
    
    for(int row=size;row!=0;row--){
        //for printing star
        int temp=row;
        while(temp!=0){
            cout<<"*";
            temp--;
        }
        
        //loop for space
        for(int i=0;i<(size-row);i++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
