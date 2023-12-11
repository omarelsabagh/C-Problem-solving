#include <iostream>
#include <cctype>


using namespace std;

int main(){

//inputs
int n;
string s;

cin>>n;
cin>>s;

//solution
bool alpha[26] = {false};

for(int i = 0 ; i<n ; i++){
char letter = tolower(s[i]);
int index = letter - 'a';
alpha[index] = true;
}

bool flag = true;
for(int i = 0 ; i<26 ; ++i){
if(alpha[i]==false){
    flag = false;
    break;
}
}

//output
if(flag){
cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


    return 0;
}