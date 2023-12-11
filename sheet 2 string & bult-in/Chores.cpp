#include <iostream>
#include <algorithm>  
using namespace std;

int main(){

//inputs
int n;
int k;
int x;

cin>>n;
cin>>k;
cin>>x;
int arr[10];
for(int i = 0 ; i<n ; i++){
cin>>arr[i];
}
//solution
sort(arr, arr+n);

int sum = 0;
for(int i =0 ; i<n-k ; i++){
sum+= arr[i];
}

//output

cout<< sum + k*x << endl;

    return 0;
}