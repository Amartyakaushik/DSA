#include <iostream>
using namespace std;

//Find circumfrence of a circle
int main(){
    int radius;
    cout<<"Enter the radius:";
    cin>>radius;
    
    int circumfrence=2*(3.14)*radius;
    cout<<"The circumfrence of a circle of radius "<<radius<<" is "<<circumfrence<<endl;
}