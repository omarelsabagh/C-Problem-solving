#include <iostream>
#include <unordered_map>

using namespace std;

int main(){

int tc;
cin>>tc;

for(int i =0 ; i < tc ; i++){
 unordered_map <char ,int> map;
 string s1,s2;
 cin>>s1;
 for(int j =0 ; j<s1.length(); j++){
  map[s1[j]] = 1;
 }
 cin>>s2;
  for(int j =0 ; j<s2.length(); j++){
//    cout<<map.count(s2[i])<<endl;
   if(map.count(s2[j])>0){

     map[s2[j]]++;
   } 
 }
 bool check = false;
 for(pair<char,int> value:map){
    // cout<<value.second<<endl;
    if(value.second > 1){
        check = true;
    }
 }

 if(check){
    cout<<"YES"<<endl;
 }else{
    cout<<"NO"<<endl;
 }

}

    return 0;
}

//https://www.hackerrank.com/contests/101hack19/challenges/two-strings