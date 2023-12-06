#include <iostream>
using namespace std;

int main() {
 //inputs
 long long arr[5];

 for(int i =0;i<5;++i){
     cin>>arr[i]; 
 }

 //solution
 long long min = arr[0];
 long long max = arr[0];
 long long sum = 0;
 long long minSum = 0;
 long long maxSum = 0;
 for(int i=0;i<5;++i){
    if(arr[i]<min){
        min = arr[i];
    }
    if(arr[i]>max){
        max = arr[i];
    }
    sum +=arr[i];
 }
//  for(int i =0;i<5;i++){
//   if(arr[i] == max){
//       minSum+=0;
//   }else{
//     minSum+=arr[i];
//   }
//   if(arr[i] == min){
//       maxSum+=0;
//   }else{
//     maxSum+=arr[i];
    
//   }
//  }
minSum = sum - max;
maxSum = sum - min;
 //output
 cout<<minSum<<" "<<maxSum<<endl;


    return 0;
}