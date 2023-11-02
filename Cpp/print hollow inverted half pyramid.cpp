#include <iostream>
using namespace std;

//print hollow inverted half pyramid
int main()
{
    int size;
    cout<<"Enter the size of the matrix: ";
    cin>>size;
    
    for(int row=0;row<size;row++){
        for(int col=0;col<size;col++){
            //for star
            if(row==0 || col==0 || col==(size-row-1)){
                cout<<"*";
            }else{      // for space
                cout<<" ";
            }
            
        }
        cout<<endl;
    }

    return 0;
}
