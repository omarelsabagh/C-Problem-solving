//https://leetcode.com/problems/count-good-triplets/description/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){

   vector<int> arr = {3,0,1,1,9,7};  
   int a = 7, b = 2, c = 3;
   int ans = 0;
   for (int i = 0; i < arr.size(); i++){
     for (int j = i+1; j < arr.size() ; j++){
        for (int k = j+1; k < arr.size() ; k++){
              
        int counter = 0;
        if(j+1 > arr.size()){
           continue; 
        }
            if(abs(arr[i] - arr[j]) <= a){
             counter++;
            }
            if(abs(arr[j] - arr[k]) <= b){
                counter++;
            }
            if(abs(arr[i] - arr[k]) <= c){
                counter++;
            }

            if(counter == 3){
                ans++;
            }
        }
      
     }
     

   }
   
   cout<<ans<<endl;

//    return ans;

    
    return 0;
}


/*
arr =
[7,3,7,3,12,1,12,2,3]
a =5
b =8
c =1
counter= 2

*/