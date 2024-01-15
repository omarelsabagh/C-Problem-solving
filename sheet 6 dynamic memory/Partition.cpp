//https://codeforces.com/problemset/problem/946/A
#include <iostream>
#include <vector>

using namespace std;

int main(){

int count;
cin>> count;

int sum = 0;

for (size_t i = 0; i < count; i++){
    int num;
    cin >>num;
    if(num > 0){
        sum+=num;
    }else{
        sum+= (num*-1);
    }
}


cout<<sum<<endl;

    return 0;
}

/*
3
1 -2 -2 0
1 - 

*/