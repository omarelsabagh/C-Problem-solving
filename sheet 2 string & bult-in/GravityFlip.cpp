#include <iostream>
#include <algorithm>
using namespace std;

int main(){

//inputs
int n;
cin>>n;

int arr[10];

for(int i = 0 ; i <n ; i++){
    cin>>arr[i];
}


//solution
sort(arr, arr+n);
//output

for(int i =0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}

    return 0;
}