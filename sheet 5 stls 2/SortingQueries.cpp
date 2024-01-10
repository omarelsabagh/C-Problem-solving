#include <iostream>
#include <deque>
#include <set>

using namespace std;

int main(){
 
 int queries;
 cin>>queries;
 
 multiset<int> set;
 deque<int> dq;


 for(int i = 0 ; i<queries ; i++){
    int Q;
    cin>>Q;
    if(Q == 1){
        int x;
        cin>>x;
        dq.push_back(x);
    }else if(Q==2){
       if(!set.empty()){
        cout<< *set.begin()<<endl;
       set.erase(set.begin());

       }else{
         cout<<dq.front()<<endl;
         dq.pop_front();
       }
    }else{
      while(!dq.empty()){
        set.insert(dq.back());
        dq.pop_back();
      }
    }
 }
    
    return 0;
}

/*
8
1 2
1 1
1 4
1 
3
2
1 0
2

*/

//https://atcoder.jp/contests/abc217/tasks/abc217_e?lang=en