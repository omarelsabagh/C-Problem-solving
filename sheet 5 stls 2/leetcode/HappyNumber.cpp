#include <iostream>
#include <unordered_set> 
#include <cmath>
#include <string>

using namespace std;

int main(){

int n = 2;

int counter = 0;
unordered_set<int> checkDuplicates;

bool check = false;
while(counter == checkDuplicates.size()){

 string stringOfN = to_string(n);
 int temp = 0;
 for(int i =0 ; i< stringOfN.length();i++){
  int convertToInt = stringOfN[i] - '0' ;  
  temp+= pow(convertToInt,2);
 }
 n = temp;
 if(temp ==1){
 check = true;
 }
 counter++;
 checkDuplicates.insert(temp);
}

if(check){
    cout<<"true"<<endl;
}else{
    cout<<"false"<<endl;
}

    return 0;
}

/*
20
4 + 0 = 4
16
1 + 36
37
9 + 49
58
25 + 64
89
64 + 81
145
1 + 16 + 25
42
16 + 4
20

17
1 + 49
50
25
4 + 25
29
4 + 81
85
64 + 25
89
64+81
145
42
20
4
16
37
9 + 49
85

9999
81 + 81 + 81 + 81
324
9 + 4 + 16
29
 
*/

//https://leetcode.com/problems/happy-number/