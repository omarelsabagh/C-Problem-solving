#include <iostream>
#include <algorithm>  
using namespace std;

int main(){

//inputs
int t;
cin>>t;

string arr[10];
//solution
for(int i =0 ; i<t ; ++i){
    string s;
cin>>s;
string newStr = s.substr(0,1);

for(int i =1 ; i<s.length() ;++i ){
if(i%2==0){
    newStr+= s[i];
}
}

arr[i] =  newStr + s[s.length()-1];

}
  

//output

for(int i =0 ; i<t ; ++i){
cout<<arr[i]<<endl;
}

    return 0;
}