#include <iostream>
#include <string>
#include <unordered_map> 
#include <vector>
using namespace std;

int main(){

vector<int> nums = {2,7,11,15};
int target = 9;
unordered_map <int,int> map;

for(int i=0 ; i< nums.size();i++){
    int cp = target - nums[i];
    if(map.count(cp) != 1){
       map[nums[i]] = i;
    }else{
        string output = "["+to_string(map[cp]) +","+to_string(i)+"]";
        cout<<output<<endl;
    }

}
    

    return 0;
}

/*
2 11 7 15

i=0
target - nums[i]
9-2 = 7
{2:0}

i=1
9-11 = -2
{11,1}

i=2
9 - 7 = 2
there's a key 2 in the map
enter else

[0,1]
*/

//https://leetcode.com/problems/two-sum/