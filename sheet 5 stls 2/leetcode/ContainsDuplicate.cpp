#include <iostream>
#include <unordered_set> 
#include <vector>
using namespace std;

int main(){

vector<int> nums = {1,2,3,1};
unordered_set<int> checkDuplicates;

for(int value : nums){
checkDuplicates.insert(value);
}
bool output = nums.size() == checkDuplicates.size();
cout<< output <<endl;



    return 0;
}



//https://leetcode.com/problems/contains-duplicate/