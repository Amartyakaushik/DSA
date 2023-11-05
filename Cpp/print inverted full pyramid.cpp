#include <iostream>
using namespace std;

//print inverted full pyramid
int main()
{
    int rowSize;
    cout<<"Enter row of matrix: ";
    cin>>rowSize;
    
    for(int row=0;row<rowSize;row++){
        //Space
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        //star
        for(int col=0;col<rowSize-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}





