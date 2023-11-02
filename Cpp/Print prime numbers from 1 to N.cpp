#include <iostream>
using namespace std;

// Print prime numbers from 1 to N
int main()
{
    int number;
    cout<<"Enter the value of Number: ";
    cin>>number;
    
    cout<<"the prime numbers are "<<endl;
    for(int i=2;i<number;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                break;
            }else{
                cout<<i<<endl;
                break;
            }
        }
    }
    
    return 0;
}
