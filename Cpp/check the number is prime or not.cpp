#include<iostream>
using namespace std;
 
// check the number is prime or not

int main(){
    int Number;
    cout<<"Enter the value of Number: ";
    cin>>Number;
    
    if(Number<2){
        cout<<"Enter a valid number"<<endl;
    }else if(Number==2){
        cout<<"This number is a prime number."<<endl;
    }
    
    else{
        for(int i=2;i<Number;i++){
            if(Number%i==0){
                cout<<"Not prime"<<endl;
            // break;
            }else{
                cout<<"It's a prime number."<<endl;
                break;
            }
        }
    }
    
    return 0;
}