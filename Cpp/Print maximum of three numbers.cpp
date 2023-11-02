#include <iostream>
using namespace std;

//Print maximum of three numbers
int main()
{
    int num1,num2,num3;
    cout<<"Enter three numbers:"<<endl;
    cin>>num1>>num2>>num3;
    
    if(num1>num2){
        if(num1>num3){
            cout<<num1<<" is the biggest number"<<endl;
        }else{
            cout<<num3<<" is the biggest number hula1"<<endl;
        }
    }else if (num2>num3){
        cout<<num2<<" is the biggest number hula2"<<endl;
    }

    return 0;
}
