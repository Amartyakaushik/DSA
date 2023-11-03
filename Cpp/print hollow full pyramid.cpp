#include <iostream>
using namespace std;

//print hollow full pyramid
int main()
{
    int rowSize;
    cout<<"Enter the size of the row: ";
    cin>>rowSize;
    int colSize=(rowSize*2)-1;
    
    for(int row=0;row<rowSize;row++){
        int k=0;
        for(int col=0;col<colSize;col++){
            // for printing starting space
            if(col<(rowSize-row-1)){
                cout<<" ";
            }else if(k<(2*row)+1){                // for printing space between stars
                if(k==0 || k==(2*row) || row==rowSize-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
                k++;
            }else{                               // for printing last spaces
                cout<<"";
            }
        }
        cout<<endl;
    }

    return 0;
}
