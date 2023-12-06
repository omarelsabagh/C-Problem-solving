#include <iostream>
using namespace std;

int main() {
//inputs
  int t;
  int n;
  cin>>t;

   for(int i =0;i<t;i++){
    cin>>n;
    //solution
    int height = 1;
    for(int j=1; j<=n; j++){
      if(j%2==0){
        height +=1; 
      }else{
        height *=2;
      }
    }
    //output
    cout<<height<<endl;
  }

  return 0;
}