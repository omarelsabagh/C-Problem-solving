#include <iostream>
using namespace std;

int main() {
  //inputs
  int a[3];
  int b[3];

  for(int i =0;i<3;i++){
    cin>>a[i];
  }

  for(int i =0;i<3;i++){
    cin>>b[i];
  }

//solution
int aCount = 0;
int bCount = 0;
for(int i=0;i<3;i++){
if(a[i]>b[i]){
    aCount++;
}else if(a[i]<b[i]){
    bCount++;
}

}
int result[2] = {aCount,bCount};
//output
cout<<result[0]<<" "<<result[1]<<endl;
  return 0;
}