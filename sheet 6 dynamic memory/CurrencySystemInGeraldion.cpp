//https://codeforces.com/problemset/problem/560/A
#include <iostream>

using namespace std;

int main(){

 int n;
 cin>>n;

 bool fort = false;

 for (int i = 0; i < n; i++){
   int num;
   cin>>num;
   if(num == 1){
    fort = true;
   }
 }
 
 if(fort){
       cout<<-1<<endl;
  
 }else{
   cout<<1<<endl;
 }

    return 0;
}

/*


*/