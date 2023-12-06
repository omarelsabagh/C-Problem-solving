#include <iostream>
using namespace std;

int main() {
  //inputs
  int n;
  int k;
  cin>>n>>k;



  int arr[10];

  for(int i =0;i<n;i++){
    cin>>arr[i];
  }

//solution
int max = 0;

for(int i=0;i<n;i++){
    if(arr[i]> max){
        max = arr[i];

    }

}
int potions = max -k;


//output
if(potions<0){
  cout<<0<<endl;
}else{
  cout<<potions<<endl;
}

  return 0;
}