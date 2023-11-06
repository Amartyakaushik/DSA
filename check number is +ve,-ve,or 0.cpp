#include<iostream>
using namespace std;

//check number is +ve,-ve,or 0
int main(){
    int number;
    cout<<"Enter a number:";
    cin>>number;
    
    if(number>0){
        cout<<number<<" is a +ve number"<<endl;
    }else if(number==0){
        cout<<"it's a "<<number<<endl;
    }else{
        cout<<number<<" is a -ve number"<<endl;
    }
}
