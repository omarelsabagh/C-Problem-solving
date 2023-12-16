#include <iostream>
#include <string>  
#include <algorithm>
using namespace std;

int main(){

    //time complixty O(nlog(n))


    string s;
    cin>>s;
 
    int arr[9];
    for(int i=0 ; i<s.length()  ; i++){
     if(s[i] != '+'){
   
     arr[i] = stoi(s.substr(i,1));  
     }else{
        arr[i] = 0;
     }
    }

    sort(arr,arr+s.length());

     string newStr;

     for(int i=0 ; i<s.length() ; i++){
   
     if(arr[i]!= 0){
      
      string temp = to_string(arr[i]);

       if(i!= s.length()-1){
        newStr+= temp + "+";
       }else{
        newStr+= temp;
       } 
    
     }
    }
    cout<<newStr<<endl;
    
    return 0;
}

