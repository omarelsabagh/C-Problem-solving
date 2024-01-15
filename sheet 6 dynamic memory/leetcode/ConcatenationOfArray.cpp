//https://leetcode.com/problems/concatenation-of-array/description/
#include <iostream>
#include <vector>
using namespace std;

int main(){

   vector<int> nums = {1,2,1};  

   vector<int> ans;
   int itr=0;
   for(int i =0 ; i< nums.size()*2 ; i++){
    if(itr>nums.size() - 1) itr = 0;
    ans.push_back(nums[itr]);
     itr++;
   }

//    return ans;

   for(int x:ans){
    cout<<x<< " ";
   }
    
    return 0;
}


/*

*/