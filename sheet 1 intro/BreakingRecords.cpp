#include <iostream>
using namespace std;

int main() {
  //taking inputs
  int n;
  cin>>n;

  int pointsPerGame[1000];

  for(int i =0;i<n;i++){
    cin>>pointsPerGame[i];
  }

  //solution
int max = pointsPerGame[0];
int min = pointsPerGame[0];

int maxCount = 0;
int minCount = 0;

for(int i =0;i<n;i++){
if(pointsPerGame[i] > max){
max = pointsPerGame[i];
maxCount +=1;
}

if(pointsPerGame[i] < min){
min = pointsPerGame[i];
minCount +=1;
}
}

cout<<maxCount<<" "<<minCount<<endl;
  return 0;
}