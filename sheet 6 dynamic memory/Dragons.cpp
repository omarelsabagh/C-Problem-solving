//https://codeforces.com/problemset/problem/230/A
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int s, n;
    cin>>s;
    cin>>n;

    bool check = true;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
   

    for(int i = 0 ; i < n ; ++i){
      int x, y;
 
      cin>>x;
      cin>>y;
      
      pq.push({x,y});
    }

    while(!pq.empty()){
    if(s>pq.top().first){
        s+=pq.top().second;
        pq.pop();
      }else{
        check = false;
        break;
      }
    }

    if(check){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 

    return 0;
}

/*
make map sorted keys of y desc

2 5
5 1
2 1
3 1
1 1
4 1

999 2
67 89
1010 10

123 2
78 10
130 0

2 2
1 99
100 0

5 10
20 1
4 3
5 1
100 1
4 2
101 1
10 0
10 2
17 3
12 84

4 2
4 3
5 1
10 0
10 2
12 84
17 3
20 1
100 1
101 1

s=5
  7
  10
  11
  13
  97
  100
  101
  102
  103

*/