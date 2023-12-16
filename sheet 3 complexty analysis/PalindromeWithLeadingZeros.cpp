#include <iostream>
using namespace std;

int main(){

    //time complixty O(n)

    string s;
    cin>>s;
    bool palindrome = true;
    string zeros;
 

        if(s[s.length()-1] == '0'){
                for(int i =s.size()-1 ;i>0;i--){
        if(s[i]=='0'){
            zeros+= "0";
        }else{
            break;
        }
    }
            s.insert(0,zeros);
        }

for(int i=0, j=s.size()-1 ; i<s.size()&&j>=0 ; i++,j--){

              if(s[i]!=s[j]){

             palindrome = false;
             break;
           }
}

      if(palindrome){
       cout<<"Yes"<<endl;
      }else{
          cout<<"No"<<endl;
      }
    
    return 0;
}

/*
count zeros from back on j
else{
    if s[i] == s[j] print yes{
      
    }else{
      if last index == 0 {
        append count times of zeros to the start of string
        then
        check if s[i] == s[j] print yes
        else{
            print no
        }
      }else{
        print no
      }
    }

}



0 1 2 3 4 5
1 2 1 0
length = 4
i=0
i and j 
if length even this works
if s[0] == s[3]
if s[1] == s[]
1 2 3 2 1

*/