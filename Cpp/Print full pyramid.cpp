#include <iostream>
using namespace std;

//print full pyramid
int main()
{
    int rowSize;
    cout<<"Enter row of matrix: ";
    cin>>rowSize;
    int colSize=(rowSize*2)-1;
    cout<<colSize<<endl;
    
    for(int row=0;row<rowSize;row++){
            int k=0;
        for(int col=0;col<colSize;col++){
            //for starting star
            if(col<(rowSize-row-1)){
                cout<<" ";
            }else if(k<(row*2)+1){
                cout<<"*";
                k++;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
