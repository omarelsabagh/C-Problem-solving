//https://codeforces.com/problemset/problem/1516/A
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tc;
    cin>>tc;

    for (int i = 0; i < tc; i++) {
     int count, ops;
     cin>>count;
     cin>>ops;
     vector<int> v;
     for (int j = 0; j < count; j++){
        int num;
        cin>>num;
        v.push_back(num);
     }
     int itr = 0;
     while(ops--){
       if(v[itr] == 0 && itr != v.size()-1){
        itr++;
        ops++;
        continue;
       } 

     v[itr]--;
     v[v.size()-1]++;
     }
      
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
     
    }
    

    return 0;
}

/*
4 5
1 0 0 0
*/