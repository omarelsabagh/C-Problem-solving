#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    unordered_map<string,int> map;
    
    for(int i = 0 ; i<n ; i++){
        string s;
        cin>>s;
        if(map.count(s) > 0){
            map[s]++;  
            string createdName = s + to_string(map[s]) ; 
            cout<<createdName<<endl;
            map[createdName] = map[s];
        }else{
            map[s] = 0;
            cout<<"OK"<<endl;
        }
    }

    
    return 0;
}

//https://codeforces.com/problemset/problem/4/C