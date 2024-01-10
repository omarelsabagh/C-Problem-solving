#include <iostream>
#include <queue>


using namespace std;

int main(){

    int n;
    cin>>n;

    priority_queue<long long,vector<long long>,greater<long long>> pq;
    long long sum = 0;
    int counter = 0;
    for (int i = 0; i < n; i++){
        long long potion;
        cin>>potion;
        if(potion >= 0){
           counter++;
           sum+=potion;
        }else{
            if(sum+potion >= 0){
              pq.push(potion);
              counter++;
              sum+=potion;
            }else{
              if(!pq.empty() && pq.top() < potion){
                sum-=pq.top();
                sum+=potion;
                pq.pop();
                pq.push(potion);
              }  

            }
        }

 
    }

cout<<counter<<endl;
    return 0;
}

/*
6
4 -4 1 -3 1 -3
sum = 4
counter = 1

sum = 0
counter = 2
pq : -4

sum = 1
counter = 3

sum = 5
sum = 2
pq: -3

sum = 3
counter = 4

sum = 0
counter = 5



5
-2 4 -1 5 -3

=====================
8
3 -5 2 -8 1 7 6 -4
sum = 3
counter = 1

sum = 5
counter = 2

sum = 19
counter = 5

output: 6



*/


//https://codeforces.com/problemset/problem/1526/C2