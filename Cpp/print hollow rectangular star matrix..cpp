#include <iostream>
using namespace std;

//print hollow rectangular star matrix.
int main()
{
    int size;
    cout<<"Enter the size of the matrix: ";
    cin>>size;
    
    for(int row=0;row<size;row++){
        for(int col=0;col<size;col++){
            //condtion for printing star
            if(row==0 || row== size-1){
                cout<<"*";
            }else if(col==0 || col== size-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
