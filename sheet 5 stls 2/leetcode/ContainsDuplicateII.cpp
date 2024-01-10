#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){

vector<int> nums = {1};
const int k = 1;

unordered_map<int, int> indexMap;

for (int i = 0; i < nums.size(); ++i) {
if (indexMap.find(nums[i]) != indexMap.end() && i - indexMap[nums[i]] <= k){
    return true;
        }
    indexMap[nums[i]] = i;
              }
   return false;

    return 0;
}


//https://leetcode.com/problems/contains-duplicate-ii/