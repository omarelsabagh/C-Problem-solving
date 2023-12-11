#include <iostream>
#include <string>  
#include <algorithm>  
#include <cmath>
using namespace std;

int main(){

//inputs
int a;
int j;
int k;

cin>>a;
cin>>j;
cin>>k;

//solution
int count = 0;

for(int i = a;i<=j;i++){
    string tempStrConv = to_string(i);
    reverse(tempStrConv.begin(), tempStrConv.end());
    int intAfterReverse = stoi(tempStrConv);
    float eq = abs((float(i) - intAfterReverse)/k);
    float diff = eq- int(eq);

if(diff == 0){
  count++;
}
}


//output

cout<<count<<endl;

    return 0;
}