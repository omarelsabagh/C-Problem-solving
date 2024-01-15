//https://atcoder.jp/contests/abc189/tasks/abc189_a?lang=en
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string s;
    cin>>s;

     unordered_map<char,int> map;  
    for(char value:s){
        if(map.find(value) != map.end()){
            map[value]++;
        }else{
          map[value] = 1;
        }
        
    }
    
    if(map[s[0]] == 3){
        cout<<"Won"<<endl;
    }else{
        cout<<"Lost"<<endl;
    }



    return 0;
}