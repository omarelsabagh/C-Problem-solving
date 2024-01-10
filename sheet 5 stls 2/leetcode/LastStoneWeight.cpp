#include <iostream>
#include <vector>
#include <queue>


using namespace std;

int main(){

vector<int> stones = {2,7,4,1,8,1};

priority_queue<int> pq;

for (int i = 0; i < stones.size(); i++){
    pq.push(stones[i]);
}


    while (pq.size() > 1) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();

        // Calculate the new weight and insert it back into the heap
        int newWeight = x - y;
        if (newWeight > 0) {
            pq.push(newWeight);
        }
    }

    cout<< pq.empty() ? 0 : pq.top();
/*
2 7 4 1 8 1
1 1 2 4 7 8 s=6
temp=8
1 1 2 4 7
top=7
1 1 1 2 4 s=5
temp=4
1 1 1 2
top=2
1 1 1 2 s=4
temp=2
1 1 1
top=1
1 1 1 s=3
temp=1
1 1
top=1
1 s=1
*/



    return 0;
}
/*
1 1 2 4 7 8
*/



//https://leetcode.com/problems/last-stone-weight/