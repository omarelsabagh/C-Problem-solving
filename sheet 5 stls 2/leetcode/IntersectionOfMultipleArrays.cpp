#include <iostream>
#include <map> 
#include <vector>
using namespace std;

int main(){
vector<vector<int>> nums = {{3,1,2,4,5},{1,2,3,4},{3,4,5,6}};

map<int,int> map;
vector<int> output;

for(int i = 0 ; i< nums.size();i++){
    for(int j=0; j<nums[i].size(); j++){
        if(map.count(nums[i][j]) == 0){
            map[nums[i][j]] = 1;
        }else{
            map[nums[i][j]]++;
        }
    }
}

for(pair<int,int> value :map){
    if(value.second == nums.size() ){
        cout<< value.first<<endl;
    }
}


    return 0;
}



//https://leetcode.com/problems/intersection-of-multiple-arrays/