#include <iostream>
using namespace std;

int main() {
 //inputs
 int n;
 cin>>n;
 int matrix[5][5];

 for(int i =0;i<n;++i){
   for(int j=0;j<n;j++){
     cin>>matrix[i][j];
   }
 }


 //solution
int leftToRight = 0;
int rightToLeft = 0;
  for(int i =0;i<n;++i){
     leftToRight += matrix[i][i];
     rightToLeft += matrix[i][n-1-i];
 }

int diff = leftToRight-rightToLeft;
 //output
if(diff<0){
       cout<<diff*-1<<endl;
}else{
       cout<<diff<<endl;
}
   

    return 0;
}