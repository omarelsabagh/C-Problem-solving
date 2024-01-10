#include <iostream>
#include <sstream>
#include <unordered_set>

using namespace std;

int main(){
    string s;
    getline( cin, s);
    
    unordered_set<char> set;

    for(int i =0 ; i<s.length() ; i++){
       int askii =  s[i] - 0;
    //    cout<<askii<<endl;
       if(askii >= 97 && askii <= 122){
         set.insert(s[i]);
       } 

    }
    
    cout<<set.size()<<endl;

    return 0;
}


/*
askii 97 : 122 
*/

//https://codeforces.com/problemset/problem/443/A