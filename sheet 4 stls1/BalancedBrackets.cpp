#include <iostream>
#include <stack>
using namespace std;

int main(){

    int tc;
    cin>>tc;

    for(int i=0 ;i <tc ; i++){
      stack <char> stack;
      string s;
      cin>>s;

      for(int j=0 ; j< s.length(); j++){
        if(s[j]== '{' || s[j]== '(' || s[j]== '['){
         stack.push(s[j]);
        }
        else if(!stack.empty() && stack.top() == '{' && s[j] == '}'){
          stack.pop();
        }
        else if(!stack.empty() && stack.top() == '(' && s[j] == ')'){
          stack.pop();
        }
        else if(!stack.empty() && stack.top() == '[' && s[j] == ']'){
          stack.pop();
        } else{
            stack.push(s[j]);
        }
      }

      if(stack.empty()){
        cout<<"YES"<<endl;;
      }else{
        cout<<"NO"<<endl;
      }
    

    }


    return 0;
}

/*
[(])
[](){()}
{[()]}
[)(]
{(([])[])[]]}
s: 
*/