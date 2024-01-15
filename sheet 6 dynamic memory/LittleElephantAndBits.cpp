//https://codeforces.com/problemset/problem/258/A
#include <iostream>

using namespace std;

int main(){
    
    string binary;
    cin>>binary;
    
    bool found = false;

    string newStr = "";

    for (int i = 0; i < binary.length(); i++){ 
       if(!found && binary[i] == '0'){
        found = true;
        continue;
       }
       newStr += binary[i];
    }

    if(!found){
        newStr.erase(1,1);
    }

    cout<<newStr<<endl;
    
    return 0;
}

/*

*/