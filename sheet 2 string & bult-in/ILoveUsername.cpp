#include <iostream>
using namespace std;

int main(){

//inputs
int n;
cin>>n;
int arr[10];
for(int i = 0 ; i<n ; i++){
cin>>arr[i];
}
//solution

int max = arr[0];
int min = arr[0];

int count = 0;


for(int i =0;i<n;i++){
if(arr[i] > max){
max = arr[i];
count++;
}

if(arr[i] < min){
min = arr[i];
count++;
}
}


//output
cout<<count<<endl;

    return 0;
}