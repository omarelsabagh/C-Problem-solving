#include <iostream>
using namespace std;

int main() {
 //inputs
 int b;
 int n;
 int m;

 cin>>b;
 cin>>n;
 cin>>m;

 int keyboard[10];
 int drive[10];

 for(int i =0;i<n;i++){
     cin>>keyboard[i]; 
 }

  for(int i =0;i<m;i++){
     cin>>drive[i]; 
 }

 //solution
int maxPrice = keyboard[0]+drive[0];

 for(int i =0;i<n;i++){
    for(int j=0;j<m;j++){
      if(keyboard[i]+drive[j]<= b && keyboard[i]+drive[j] >= maxPrice ){
        maxPrice= keyboard[i]+drive[j];
      }
       if(maxPrice > b){
    maxPrice = -1;
 }

    }
 }


 //output
cout<<maxPrice<<endl;

    return 0;
}