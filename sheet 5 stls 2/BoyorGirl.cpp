#include <iostream>
#include <unordered_set>


using namespace std;

int main(){
    string name;
    unordered_set<char> set;
    cin>>name;
    for(char value: name){
      set.insert(value);
    }
    if(set.size() % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    
    return 0;
}

//https://codeforces.com/problemset/problem/236/A