#include <iostream>
using namespace std;

int main() {
  //inputs
  int n;
  int d;
  cin>>n>>d;

  const int size = 0;

  int arr[10];

  for(int i =0;i<n;i++){
    cin>>arr[i];
  }

//solution
  for(int i =0;i<d;i++){
    int carry = arr[0];
    
    for(int j =0;j<n;j++){
       arr[j]= arr[j+1];
      
    }
     arr[n-1]= carry;
  }

  //output

for(int i =0;i<n;i++){
  cout<<arr[i]<<" ";
}



  return 0;
}