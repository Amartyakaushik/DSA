#include <iostream>
using namespace std;

//Print N to 1 but only odd numbers and then only even.
int main()
{
    int number;
    cout<<"Enter the value of number: ";
    cin>>number;
    
    cout<<"Odd numbers from 1 to "<<number<<endl;
    for(int i=1;i<number;i++){
        //condition for odd
        if(i%2!=0){
            cout<<i<<endl;
        }
    }


    cout<<endl;
    cout<<"Even numbers from 1 to "<<number<<endl;
    for(int i=1;i<number;i++){
        //condition for odd
        if(i%2==0){
            cout<<i<<endl;
        }
    }

    return 0;
}
