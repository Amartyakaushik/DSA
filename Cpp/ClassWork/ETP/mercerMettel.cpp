#include<iostream>
using namespace std;
int timeOfInvestMent(int inp1, int inp2[]){
    int count = 0;
    int s;
    while(true){     
    int sum = 0;
    for(int i = s; i< inp1; i++){
        sum += inp2[i];
    }
    if(sum % 2 != 0) break;

    int halfSum = sum / 2;
    int currentSum = 0;
    int splitIndex = -1;
    for(int i = s; i<inp1; i++){
        currentSum += inp2[i];
        if(currentSum == halfSum){
            splitIndex = i;
            // cout<<(splitIndex )<<"h ";
            break;
        }cout<<endl;
    }
    if(splitIndex == -1) break;
    count++;
    s = splitIndex + 1;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    int count = timeOfInvestMent(n, arr);
    cout<<"value: is "<<count;
}