//https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){

   vector<int> v = {1,4,2,5,3};  
   int ans = 0;

   for(int i = 0; i<v.size(); i++){
        int sum = 0;
        for(int j =i ; j < v.size(); j++){
            sum+= v[j];
            int length = j - i +1;
            if(length % 2 != 0){
                ans+= sum;
            }
        }
       
   }      
   cout<<ans<<endl;
    
    return 0;
}


/*
0 1 2 3 4
1 4 2 5 3

1 2 3

number of operations = ceil(v.size / 2) 
loop for this number of operations
every loop sum all the vector elements with defferent step
*/