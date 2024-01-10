#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cin>>n;

    unordered_map<string,int> map;
    stack<string> stack;

    for(int i=0 ; i<n ; i++){
        string s;
        cin>>s;
        stack.push(s);
        map[s] = 1;   
    }

    while(!stack.empty()){
      if(map[stack.top()] == 1){
        cout<<stack.top() <<endl;
        map[stack.top()]--;
      }
      stack.pop();
    }
    
    return 0;
}

//https://codeforces.com/problemset/problem/637/B