#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){

vector <int> candyType = {6,6,6,6};
unordered_set<int> removeDuplicates;

    int half = candyType.size() / 2 ;

    for(int i=0 ; i<candyType.size(); i++){
        removeDuplicates.insert(candyType[i]);
    }

    if(removeDuplicates.size() >= half){
        int toHalf = removeDuplicates.size() - half;
        cout<< removeDuplicates.size() - toHalf <<endl;
 
    }else{
       cout<< removeDuplicates.size() <<endl;
    }
    
    return 0;
}

/*
1 1 2 3

*/

//https://leetcode.com/problems/distribute-candies/