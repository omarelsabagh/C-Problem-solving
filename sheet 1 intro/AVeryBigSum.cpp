#include <iostream>
using namespace std;

int main() {
 //inputs
 int n;
 cin>>n;
 int arr[10];
 for(int i =0;i<n;++i){
     cin>>arr[i];
 }
 //solution
 long long sum = 0;
 for(int i=0;i<n;++i){
     sum+= arr[i];
 }
 //output
 cout<<sum<<endl;

    return 0;
}