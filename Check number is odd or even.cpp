#include<iostream>
using namespace std;

//Check number is odd or even
int main(){
    int num;
    cout<<"Enter ur number:";
    cin>>num;
    
    if(num%2==0){
        cout<<num<<" is an even number."<<endl;
    }else {
        cout<<num<<" is an odd number."<<endl;
    }
}
