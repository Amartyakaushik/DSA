#include<iostream>
using namespace std;
 
// Print counting from N to 1 and reverse. fist take N as input from the user.
int main(){
    int Number;
    cout<<"Enter the value of Number: ";
    cin>>Number;
    
    for(int i=1;i<=Number;i++){
        cout<<i<<endl;
    }
    
    cout<<"reverse"<<endl;
    for(int i=Number;i!=0;i--){
        cout<<i<<endl;
    }
}