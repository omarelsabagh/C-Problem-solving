#include <iostream>
using namespace std;

int main() {
 //inputs
 
 int n;

 cin>>n;

 int candles[10];
 

 for(int i =0;i<n;i++){
     cin>>candles[i]; 
 }



 //solution
int max = candles[0];
int count = 0;

for(int i = 0;i<n;i++){
    if(candles[i]> max){
        max = candles[i];
 
    }
else if(candles[i]==max){
        count++;
    }
}


 //output
cout<<count<<endl;
    return 0;
}