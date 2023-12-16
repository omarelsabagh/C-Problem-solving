#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    //time complixty O(n)
    int tc;
    cin>>tc;
    for(int i =0; i<tc ; i++){
        int n;
        cin>>n;
        int arr[5];
        for(int j=0; j < n ; j++){
            cin>>arr[j];
        }
      sort(arr, arr + n);
     int minDif = 1000;
      for(int j =n-1; j>0 ; j--){
        if(  arr[j] - arr[j-1] < minDif ){

            minDif = arr[j] - arr[j-1];
        }
      
      }
     cout<<minDif<<endl;
    }
    
    return 0;
}

/*
3 1 2 6 4
1 2 3 4 6
team a: 4 2 1
team b: 6 3 

2 1 3 2 4 3
1 2 2 3 3 4

team a: 4 2 2 1
team b: 3 3
*/