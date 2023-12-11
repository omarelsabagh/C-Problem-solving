#include <iostream>
#include <algorithm>  
#include <cmath>
using namespace std;

int main(){

//inputs
int n;
cin>>n;

int arr1[8];
int arr2[8];
int arr3[8];

for (size_t i = 0; i < n; i++)
{
    cin>>arr1[i];
    arr3[i]=arr1[i];
}

for (size_t i = 0; i < n; i++)
{
    cin>>arr2[i];
}



//solution
sort(arr3,arr3+n);

int i = 1;
int first = 0;
int second = 0;
do{
     int counter1 = 0;
     int counter2 = 0;
for(int i=0; i<n; i++){
   
    if(arr3[i] == arr1[i]){
    counter1++;
    }
        if(arr3[i] == arr2[i]){
    counter2++;
    }
} 
    if(counter1 == n){
        first = i;
    }
        if(counter2 == n){
        second = i;
    }
i++;
}while(next_permutation(arr3,arr3+n));

//output
cout<<abs(first-second)<<endl;

    return 0;
}