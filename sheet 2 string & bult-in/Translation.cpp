#include <iostream>
#include <algorithm>  
using namespace std;

int main(){

//inputs
string s;
string t;

cin>>s;
cin>>t;

//solution
reverse(s.begin(), s.end());

//output
if(s==t){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


    return 0;
}