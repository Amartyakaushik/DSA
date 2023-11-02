#include <iostream>
using namespace std;

// Print sum of first N natural numbers.
int main()
{
    int Number;
    cout<<"Enter the value of Number: ";
    cin>>Number;
    
    int sum=0;
    for(int i=1;i<=Number;i++){
        sum+=i;
    }
    cout<<"The sum of first "<<Number<<" natural numbers is "<<sum<<endl;
    return 0;
}
