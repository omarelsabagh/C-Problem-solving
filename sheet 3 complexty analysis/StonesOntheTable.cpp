#include <iostream>
using namespace std;

int main(){

    //time complixty O(n)

    int n;
    string colors;
    cin>>n;
    cin>>colors;
    
    int counter = 0;
    for(int i=0 ; i<n ; i++){
        if(colors[i]==colors[i+1]){
          ++counter;
        }
    }
      
      cout<<counter<<endl;
    return 0;
}