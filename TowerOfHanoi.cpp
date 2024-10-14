/*case 1:  1 disc
  => move one disc from source to destination

case 2: 2 disc
 => move one disc from source to auxiliary using destination
 => move another disc from source to destination
 => again move the disc from auxiliary to destination using source

case 3: (3 disc)

=> move (n-1) disc from source to auxiliary using destination
=> move another disc from source to destination
=> move disc from auxiliary to destination using source
*/
#include<iostream>
using namespace std;
void towerOfHanoi(int n, string source, string destination, string auxiliary){
  //Base case
  if(n == 1){
    cout << "Move disc 1 from " << source <<" to "<<destination<<endl;
    return;
  }
  // else if(n == 2){
  towerOfHanoi(n-1, source, auxiliary, destination);
    cout << "Move disc " <<n<<" from " << source <<" to "<< destination<<endl;
  // cout << `Move {n} disc from {source}  to  {destination}`;
  towerOfHanoi(n-1, auxiliary, destination, source);
  // }
}
using namespace std;
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  towerOfHanoi(n, "source","destination","auxiliary");  // A - source, B - auxiliary, C - destination

  // cout<<(8<<0)<<endl;
  
}