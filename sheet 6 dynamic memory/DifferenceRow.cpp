//https://codeforces.com/problemset/problem/347/A
#include <iostream>
#include <deque>
#include <algorithm>


using namespace std;

int main(){

int count;
cin>>count;

deque<int> dq;

for (int i = 0; i < count; i++){
    int num;
    cin>>num;
    dq.push_back(num);
}

sort(dq.begin(),dq.end());

int temp = dq.back();
dq.pop_back();
dq.push_back(dq.front());
dq.pop_front();
dq.push_front(temp);

for(int x:dq){
    cout << x << " ";
}

    return 0;
}

/*
5
100 -100 50 0 -50
100 -50 0 50 -100 
=======================================
10
764 -367 0 963 -939 -795 -26 -49 948 -282
963 -795 -367 -282 -49 -26 0 764 948 -939 
*/