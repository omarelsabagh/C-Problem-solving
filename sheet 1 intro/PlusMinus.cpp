#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  //inputs
  int n;
  cin>>n;

  float arr[10];

  for(int i =0;i<n;i++){
    cin>>arr[i];
  }

//solution
float positiveCount = 0;
float zeroCount = 0;
float negativeCount = 0;

for(int i=0;i<n;i++){
if(arr[i]>0){
    positiveCount++;
} else if(arr[i]==0){
    zeroCount++;
}else if(arr[i]<0){
    negativeCount++;
}
}

float ratios[3] = {positiveCount/n,negativeCount/n,zeroCount/n};

//output
for(int i=0;i<3;i++){
cout<<fixed<<setprecision(6)<<ratios[i]<<endl;
}

  return 0;
}